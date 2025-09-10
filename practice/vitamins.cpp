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


void solve(){
    ll n;
    cin>>n;
    vector<int>arr(n);
    vector<string>st(n);
    fr(0,n){
        cin>>arr[i];
        cin>>st[i];
    }
    ll dp[n+1][8];
    fr(0,n+1){
        rep(j,0,8){
            dp[i][j] = inf;
        }
    }
    dp[0][0]=0;
    fr(0,n){
        string s = st[i];
        int num = 0;
        rep(j,0,s.size()){
            int pos = s[j]-'A';
            num = num | (1<<pos);
        }
        rep(j,0,8){
            dp[i+1][j] = min(dp[i+1][j],dp[i][j]);
            dp[i+1][j | num ] = min(dp[i+1][j|num],dp[i][j]+arr[i]);
        }
    }
    ll ans = dp[n][7];
    cout<<ans<<" "<<inf<<endl;
    if(ans==inf) ans=-1;
    cout<<ans<<endl;
    
}

int main()
{
    solve();
    return 0;
}
