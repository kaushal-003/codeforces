#include <asm-generic/errno.h>
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
#define mod2 998244353
void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

int main() {
    int t=1;
    while (t--) {
        int n,s;cin>>n>>s;
        vector<vector<int>>arr(n,vector<int>(2));
        fr(0,n)cin>>arr[i][0]>>arr[i][1];
        int dp[n+1][10005];
        memset(dp,0,sizeof(dp));
        dp[0][0]=1;
        for(int i=1;i<=n;i++){
            for(int j=0;j<=s;j++){
                if(j>=arr[i-1][0])dp[i][j]=dp[i-1][j-arr[i-1][0]];
                if(j>=arr[i-1][1])dp[i][j]=dp[i-1][j-arr[i-1][1]];
            }
        }
        if(dp[n][s]==1){
            cout<<"Yes"<<endl;
            vector<char>ans;
            int j=s;
            for(int i = n-1;i>=0;i--){
                if(dp[i][j-arr[i][0]]){
                    ans.pb('H');
                    j-=arr[i][0];
                }
                else if(dp[i][j-arr[i][1]]){
                    ans.pb('T');
                    j-=arr[i][1];
                }
            }
            reverse(all(ans));
            for(auto x:ans)cout<<x;
            cout<<endl;
        }
        else cout<<"No"<<endl;

    }
    return 0;


}
