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
    int n,s,m;
    cin>>n>>s>>m;
    int prev = 0;
    bool b1 = false;
    fr(0,n){
        int a,b;
        cin>>a>>b;
        // cout<<a<<" "<<b<<endl;
        if(a-prev>=s){
            b1= true;
        }   
        else{
            prev =b;
        }
    }
    if(m-prev>=s){
        b1 = true;      
    }
    if(b1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
   }
   return 0;
}
