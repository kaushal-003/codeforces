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
 


int RactCutting(int a, int b,vector<vector<int>>&dp){
    // if(a==b) return 0;
    // if(dp[a][b]!=-1) return dp[a][b];
    // int ans = 1e8;
    // for(int i=1;i<a;i++){
    //     ans = min(ans,1+RactCutting(a-i,b,dp)+RactCutting(i,b,dp));
    // }
    // for(int i=1;i<b;i++){
    //     ans = min(ans,1+RactCutting(a,b-i,dp)+RactCutting(a,i,dp));
    // }
    // return  dp[a][b]=ans;

    for(int h = 1;h<=a;h++){
        rep(w,1,b+1){
            if(h==w)dp[h][w]=0;
            else{
            int ans = 1e8;

            for(int i=1;i<h;i++){
                ans = min(ans,(1+dp[h-i][w]+dp[i][w]));
            }
            for(int i=1;i<w;i++){
                ans = min(ans,(1+dp[h][w-i]+dp[h][i]));
            }
            dp[h][w] = ans;
            }
        }
    }
    return dp[a][b];
}

int main() {
   read(a);
   read(b);
    vector<vector<int>>dp(a+1,vector<int>(b+1,-1));
    cout<<RactCutting(a,b,dp);
}


