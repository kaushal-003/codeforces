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
  int arr[n];
  
  for(int i=0;i<n;i++){
   cin>>arr[i];
  }
  bool b=true;
  for(int i=1;i<n;i++){
   if(arr[i-1]>arr[i]){
      int k=i;
      int ans=(k&(k-1));
      if(ans!=0){
         b=false;
         break; }

   }
  }
  if(b){
   cout<<"YES"<<endl;
  }
  else{
   cout<<"NO"<<endl;
  }

         
   }
   return 0;
}




