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
   cin >> t;
   while (t--) {
       
      int n,m,k;
      cin>>n>>m>>k;
      int x,y;
      cin>>x>>y;
      vector<vector<int>>arr(k,vector<int>(2));
      bool b=true;
      int c1=0;
      for(int i=0;i<k;i++){
         cin>>arr[i][0]>>arr[i][1];
         int xx=abs(x-arr[i][0]);
         int yy=abs(y-arr[i][1]);
         if((xx+yy)%2==0){
            b=false;
         }
      }

       
      if(b)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
      
         
   }
   return 0;
}




