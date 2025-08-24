#include<bits/stdc++.h>
#include <iostream>
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
        int h,w;
        cin>>h>>w;
        vector<vector<char>>arr(h,vector<char>(w));
        fr(0,h){rep(j,0,w){cin>>arr[i][j];}}
        int dp[h+1][w+1];
        fr(0,h+1)dp[i][0]=0;
        fr(0,w+1)dp[0][i]=0;
        fr(1,h+1){
            rep(j,1,w+1){
                if(i==1 && j==1){
                    dp[i][j] = (arr[i-1][j-1]=='.');
                }
                else if(arr[i-1][j-1]=='.')
                {
                    int up = (i-1==1 && j==1)?dp[i-1][j]:(dp[i-1][j]!=1)?dp[i-1][j]:0;
                    int left = (i==1 && j-1==1)?dp[i][j-1]:(dp[i][j-1]!=1)?dp[i][j-1]:0;
                    dp[i][j] = (up+left>0)?(1 + max(up,left)):0;
                }
                else dp[i][j] = 0;
            }
        }
        int ans = 0;
        fr(1,h+1){
            rep(j,1,w+1){
                ans = max(ans,dp[i][j]);
            }
        }
        cout<<ans<<"\n";
    }


    return 0;


}
