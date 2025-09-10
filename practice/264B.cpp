#include <bits/stdc++.h>
#include <csignal>
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
    int n;
    cin>>n;
    int arr[n];
    fr(0,n)cin>>arr[i];
    vector<int>dp(n);
    vector<int>last_visit(1e6,-1);
    int ans = 1;
    fr(0,n){
        dp[i] = 1;
        vector<int>div;
        for(int j = 1;j*j<=arr[i];j++){
            if(arr[i]%j==0){
                if(last_visit[j]!=-1 && j!=1){
                    dp[i] = max(dp[i],dp[last_visit[j]]+1);
                }
                if(j!=1)div.push_back(j);
                if(arr[i]/j!=j){
                    if(last_visit[arr[i]/j]!=-1)dp[i] =  max(dp[i],dp[last_visit[arr[i]/j]]+1);
                    div.push_back(arr[i]/j);
                }

            }
        }
        for(auto it:div){
            last_visit[it] = i;
            // cout<<it<<" ";
        }
        // cout<<endl;
        // cout<<dp[i]<<endl;
        ans = max(ans,dp[i]);
    }
    cout<<ans<<endl;
}

int main()
{
    int t=1;
    while(t--)
        solve();
    return 0;
}
