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
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x;cin >> x
using namespace std;


int main()
{
    ll n;
    cin>>n;
    if(n==1)cout<<1<<endl;
    else if(n==2)cout<<3<<endl;
    else{
        ll dp[n+1];
        ll prefix[n+1];
        prefix[0]=0;
        prefix[1]=1;
        dp[0]=0;
        dp[1]=1;
        fr(2,n+1){
            dp[i] = (prefix[i-1]+1)%mod ;
            prefix[i] = (prefix[i-2] +dp[i])%mod;
        
        }
        ll ans = 0;
        fr(1,n+1)ans=(ans+dp[i])%mod;
        cout<<ans<<endl;
    }

}
