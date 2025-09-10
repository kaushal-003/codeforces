#include <bits/stdc++.h>
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
#define read(x) ll x; cin >> x

using namespace std;

void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}



int main(){
    init_code();
    read(t);
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
        if(k%2==1){
            cout<<x<<" "<<y<<"\n";
            k--;
        }
        int lx = x-1;
        int ly = y-1;
        int rx =x+1;
        int ry = y+1;
        while(k>0){
            cout<<lx<<" "<<ly<<"\n";
            cout<<rx<<" "<<ry<<"\n";
            lx--;
            ly--;
            rx++;
            ry++;
            k-=2;
        }
        
    
    }
    return 0;
}
