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
   int n;
   cin>>n;
   vector<ll>arr(n);
   vector<ll>b(100001,0);
   fr(0,n){
   cin>>arr[i];
   b[arr[i]]++;
}

   ll dp[100000+1];
   dp[1] = b[1];
   dp[0]=0;
   fr(2,100000+1){
    dp[i] = max(dp[i-1],dp[i-2]+(i*b[i]));
   }
   cout<< dp[100000];
   return 0;
}

