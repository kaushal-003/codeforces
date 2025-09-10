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



int main() {
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        fr(0,n)cin>>arr[i];
        int dp[n+1];
        dp[0]=0;
        vector<int>a(n+1,-1e9);

        fr(1,n+1){
            dp[i] = dp[i-1];
            dp[i] = max(dp[i],a[arr[i-1]]+i);
            a[arr[i-1]] = max(a[arr[i-1]],dp[i-1]-(i-1));
            
        }
        cout<<dp[n]<<"\n";
    }
    return 0;
}


