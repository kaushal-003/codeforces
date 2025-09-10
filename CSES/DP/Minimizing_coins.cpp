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


ll coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        sort(coins.begin(),coins.end());
        ll dp[amount+1];
        for(int i=0;i<=amount;i++)dp[i]=1e18;
        dp[0]=0;
        for(int i=1;i<=amount;i++){
            for(int j=0;j<n;j++){
                if(coins[j]<=i)dp[i] = min(dp[i],1+dp[i-coins[j]]);
            }
        }
        return (dp[amount]==1e18)?-1:dp[amount];

    }

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> coin_vals(n);
    for (int i = 0; i < n; i++) {
        cin >> coin_vals[i];
    }
    sort(coin_vals.begin(), coin_vals.end());
    vector<ll> dp(x+1,-2);
    cout << coinChange(coin_vals,x);
}
