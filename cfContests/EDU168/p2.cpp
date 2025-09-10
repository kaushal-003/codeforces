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
      int n;
      cin>>n;
      vector<vector<char>>arr(n,vector<char>(2));
      fr(0,2){
         rep(j,0,n){
            cin>>arr[j][i];
            // cout<<arr[i][j];
         }
      }
      int c=0;
      for(int i=1;i<n-1;i++){
         // cout<<arr[i][0]<<endl;
         if(arr[i][0]=='.' && arr[i][1]=='.' && arr[i-1][0]=='.' && arr[i+1][0]=='.' && arr[i+1][1]=='x' && arr[i-1][1]=='x'){
            c++;
         }
      }
      for(int i=1;i<n-1;i++){
         if(arr[i][1]=='.' && arr[i][0]=='.' && arr[i-1][1]=='.' && arr[i+1][1]=='.' && arr[i+1][0]=='x' && arr[i-1][0]=='x'){
            c++;
         }
      }
      cout<<c<<endl;
   }
   return 0;
}
