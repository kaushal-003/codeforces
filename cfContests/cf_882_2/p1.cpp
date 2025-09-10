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

       vector<int>arr(n);
       for(int i=0;i<n;i++){
         cin>>arr[i];
       } 
       vector<int>v;
       for(int i=0;i<n-1;i++){
         v.push_back(abs(arr[i+1]-arr[i]));
       } 
       sort(v.begin(),v.end());
       ll sum=0;
       int i=v.size()-k;
       while(i>=0){
         sum+=v[i];
         i--;
       }
       cout<<sum<<endl;
         
   }
   return 0;

}


