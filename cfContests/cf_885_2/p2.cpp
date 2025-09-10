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
       
      int n,k;
      cin>>n>>k;  
      vector<int>v(n);
      for(int i=0;i<n;i++){
         cin>>v[i];
      } 
      vector<int>arr[k];
      for(int i=0;i<n;i++){
         arr[v[i]-1].pb(i);
      }
      int mi=INT_MAX;
      int minc=INT_MAX;
      for(int i=0;i<k;i++){
         int m=0;
         if(arr[i].size()==1){
            m=max(n-arr[i][0]-1,arr[i][0]);
            cout<<m<<endl;
         }
         else{
            m=arr[i][0];
            for(int j=0;j<arr[i].size()-1;j++){

               int a1=arr[i][j];
               int a2=arr[i][j+1];
               cout<<a1<<a2<<" ";
               m=max(m,a2-a1-1);
            }
            m=max(m,n-arr[i][arr[i].size()-1]-1);
         }
         if(m<mi)mi=m;
      } 
      cout<<mi/2<<endl;

         
   }
   return 0;
}





