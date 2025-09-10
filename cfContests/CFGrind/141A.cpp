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


int main() {
    init_code();
    int t;
    t = 1;
    while(t--){
        string s1,s2,s3;
        cin>>s1>>s2>>s3;
        map<char,int>mpp;
        bool b = true;
        fr(0,s1.size()){
            mpp[s1[i]]++;
        }
        fr(0,s2.size()){
            mpp[s2[i]]++;
        }
        fr(0,s3.size()){
            if(mpp.find(s3[i])==mpp.end()){
                b = false;
                break;
            }
            mpp[s3[i]]--;
            if(mpp[s3[i]]==0)mpp.erase(s3[i]);
        }
        if(mpp.size()>=1)b = false;
        if(b)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;

}


