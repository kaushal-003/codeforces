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
   cin>>t;
   while(t--){
      ll y,x;
      cin>>y>>x;

      if(y>x){
         ll temp=1+y*(y-1);
         
         if(y%2==0){
            cout<<temp+y-x<<endl;
         }
         else{
            cout<<temp-y+x<<endl;

         }

      }
      if(y==x){
          ll temp=1+y*(y-1);
            cout<<temp<<endl;
         
      }
      if(y<x){
          ll temp=1+x*(x-1);
         if(x%2==1){
            cout<<temp-y+x<<endl;
         }
         else{
            cout<<temp+y-x<<endl;

         }
      }
      
   }

   return 0;

}


