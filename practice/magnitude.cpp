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


int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        fr(0,n){
            cin>>arr[i];
        }
        ll dp[n+1][2];
        dp[0][0]=0;
        dp[0][1] = 0;
        fr(1,n+1){
            dp[i][0] = dp[i-1][0]+arr[i-1];
            dp[i][1] = max(dp[i-1][1]+arr[i-1],abs(dp[i-1][0]+arr[i-1]));
        }
        cout<<max(dp[n][0],dp[n][1])<<endl;

    }
    
}
