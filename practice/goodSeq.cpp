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
    
        int n;
        cin>>n;
        vector<int>arr(n);
        fr(0,n){
            cin>>arr[i];
        }
        ll dp[100005];
        fr(0,100005)dp[i]=-1;
        dp[0]=0;
        fr(1,n+1){
            dp[i]=1;
            for(int j = 1 ;j*j<=arr[i-1];j++){
                if(arr[i-1]%j==0 && dp[j]!=-1)dp[i] = max(dp[i],1+dp[j]);
            }
            // cout<<endl;
        }
        ll ans  = 0;
        fr(1,100005)ans = max(ans,dp[i]);
        cout<<ans<<endl;

    
    
}
