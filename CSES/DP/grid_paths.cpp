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

int num_paths(int n, vector<vector<char>> &grid)
{
    vector<vector<ll>> dp(n, vector<ll>(n, 0));
    dp[0][0] = (grid[0][0] == '.') ? 1 : 0;
    fr(1, n)
    {
        if (grid[i][0] == '.')
        {
            dp[i][0] = dp[i - 1][0];
        }
    }
    fr(1, n)
    {
        if (grid[0][i] == '.')
        {
            dp[0][i] = dp[0][i - 1];
        }
    }
    fr(1, n)
    {
        rep(j, 1, n)
        {
            dp[i][j] = (grid[i][j] == '.') ? (dp[i - 1][j] + dp[i][j - 1]) % mod : 0;
        }
    }
    return dp[n - 1][n - 1];
}
int main()
{
    int n;
    cin >> n;
    vector<vector<char>> grid(n, vector<char>(n));
    fr(0, n)
    {
        rep(j, 0, n)
        {
            cin >> grid[i][j];
        }
    }
    cout << num_paths(n, grid) % mod << endl;
}
