#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x
using namespace std;
 
void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

struct node{
    int open;
    int close;
    int full;
};

class SGTree{
    vector<node>seg;
    public:
    SGTree(int n){
        seg.resize(4*n+1);
    }

    void build(int l, int h, string&s, int ind){
        if(l==h){
            if(s[l]=='('){
                seg[ind].open = 1;
                seg[ind].close = 0;
                seg[ind].full = 0;
            }
            else{
                seg[ind].open = 0;
                seg[ind].close = 1;
                seg[ind].full = 0;
            }
            
            return;
        }
        int mid = (l+h)/2;
        build(l,mid,s,2*ind+1);
        build(mid+1,h,s,2*ind+2);
        seg[ind].full = seg[2*ind+1].full+seg[2*ind+2].full+ min(seg[2*ind+1].open,seg[2*ind+2].close);
        seg[ind].open = seg[2*ind+2].open+ seg[2*ind+1].open -min(seg[2*ind+1].open,seg[2*ind+2].close);
        seg[ind].close = seg[2*ind+2].close+ seg[2*ind+1].close -min(seg[2*ind+1].open,seg[2*ind+2].close);
        return;
    }

    node query(int low, int high, string &s, int ind, int l, int r){
        if(high<l || r<low) return {0,0,0};
        if(low>=l && high<=r) return seg[ind];
        int mid = (low+high)/2;
        node left = query(low,mid,s,2*ind+1,l,r);
        node right = query(mid+1,high,s,2*ind+2,l,r);
        node k;
        k.full = left.full+right.full+ min(left.open,right.close);
        k.open = right.open+ left.open -min(left.open,right.close);
        k.close = right.close+ left.close -min(left.open,right.close);
        return k;
    }

};

int main() {
    string s;
    cin>>s;
    int q;
    cin>>q;
    int n = s.size();
    SGTree sg(n);
    sg.build(0,n-1,s,0);
    while(q--){
        int l,r;
        cin>>l>>r;
        l--;r--;
        node k = sg.query(0,n-1,s,0,l,r);
        cout<<2*k.full<<"\n";
    }
    return 0;

}


