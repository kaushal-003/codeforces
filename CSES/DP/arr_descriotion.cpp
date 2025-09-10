#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL << 60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll, pair<ll, ll>>
#define goog(tno) cout << "Case #" << tno << ": "
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define read(x) \
    int x;      \
    cin >> x
using namespace std;

ll num_pos_arrays(vector<int> &arr, int n, int m)
{
    vector<vector<ll>> dp(n + 1, vector<ll>(m + 2, 0));
    fr(1, n + 1)
    {
        for(int x=1;x<=m;x++)
        {
            if (i == 1)
            {
                if (arr[i] == 0 || arr[i] == x)
                    dp[i][x] = 1;
                else
                    dp[i][x] = 0;
            }
            else
            {
                if (arr[i] == 0 || arr[i] == x)
                {
                    // cout<<i<<" "<<x<<endl;
                    dp[i][x] = ((dp[i-1][x-1]+dp[i-1][x])%mod+dp[i-1][x+1])%mod;
                }
                else
                    dp[i][x] = 0;
            }
            // cout<<dp[i][x]<<" ";
        }
        // cout<<endl;
    }
    ll ans =0;
    fr(1,m+1){
        ans=(ans+dp[n][i])%mod;
    }
    return ans;
}

int main()
{
    read(n);
    read(m);
    vector<int> arr(n+1);
    fr(1, n+1) cin >> arr[i];
    cout << num_pos_arrays(arr, n, m) << endl;
}
