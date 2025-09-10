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
      int n;
      cin>>n;
      int m;
      cin>>m;
      // cout<<n<<" "<<m<<endl;
      int k = n*m;
      vector<vector<int>>arr1(n,vector<int>(m));
      vector<vector<int>>arr2(n,vector<int>(m));
      fr(0,n){
         rep(j,0,m){
            cin>>arr1[i][j];
            arr2[i][j] = (arr1[i][j]+1)%(k);
            if(arr2[i][j]==0) arr2[i][j]=k;
         }
      }
      if(n==1 && m==1){
         cout<<-1<<endl;
      }
      else{
         fr(0,n){
         rep(j,0,m){
            cout<<arr2[i][j]<<" ";
         }
         cout<<endl;
      }
      }
   }
   
   return 0;
      
      
}




