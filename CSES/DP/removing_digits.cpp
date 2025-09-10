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

int min_sub(int n,vector<int>&dp)
{
    if (n < 0)
        return -1;
    if (n == 0)
        return 0;
    if(dp[n]!=-2) return dp[n];
    vector<int> digits;
    int temp = n;
    while (temp > 0)
    {
        digits.push_back(temp % 10);
        temp = temp / 10;
    }
    int m = INT_MAX;
    for (auto digit : digits)
    {
        if (digit != 0)
        {
            int ans = min_sub(n - digit,dp);
            if (ans != -1)
            {
                m = min(m, 1 + ans);
            }
        }
    }
    return dp[n]=m;
}
int main()
{
    int n;
    cin>>n;
    vector<int>dp(n+1,-2);
    dp[0]=0;
    cout<<min_sub(n,dp)<<endl;
}
