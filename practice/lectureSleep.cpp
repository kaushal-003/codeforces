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
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define read(x) ll x; cin >> x
using namespace std;



void solve(){
    read(n);
    read(k);
    vector<ll>arr(n);
    vector<ll>sleep(n);
    fr(0,n)cin>>arr[i];
    fr(0,n) cin>>sleep[i];
    vector<ll>prefix(n+1);
    prefix[0] = 0;
    fr(1,n+1){
        prefix[i] = arr[i-1]+prefix[i-1];
    }
    ll dp[n+1][2];
    dp[0][0]=0;
    dp[0][1]=0;
    fr(0,n){
        dp[i+1][0] = (sleep[i]==1)?arr[i]+dp[i][0]:dp[i][0];
        dp[i+1][1] = (i>=k-1)?max((dp[i-k+1][0]+prefix[i+1]-prefix[i-k+1]),dp[i+1][0]):dp[i+1][0];
    }
    
    ll ans = 0;
    fr(0,n+1){
        ans = max(ans,dp[i][1]);
    }
    cout<<ans;
}

int main()
{
    solve();
    return 0;
}
