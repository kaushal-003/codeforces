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
      int n;
      cin>>n;
      vector<int>a(n+1);
      fr(1,n+1)cin>>a[i];
      bool dp[n+1];
      fr(0,n+1)dp[i]=0;
      dp[0]=1;
      for (int i = 1; i <= n; ++i) {
        if (i + a[i] <= n && dp[i-1]) dp[i + a[i]] = true;
        if (i - a[i] - 1 >= 0 && dp[i - a[i] - 1]) dp[i] = true;
    }
    cout<<((dp[n])?"YES":"NO")<<endl;

   }
   
   return 0;
}

