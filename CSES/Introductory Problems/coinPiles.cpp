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
   // init_code();
   int t;cin>>t;
   while(t--){
      int a,b;
      cin>>a>>b;
      int c = 2*a - b;
      bool ans = true;
      if(c<0 || c%3!=0) ans = false;
      else{
         c = c/3;
         int d = b -c;
         if(d<0 || d%2!= 0) ans = false;
      }
      cout<<((ans)?"YES":"NO")<<endl;
   }
   return 0;
}