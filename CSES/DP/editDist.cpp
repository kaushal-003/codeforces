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
 

int editDist(string s, string t){
    int n = s.size();
    int m = t.size();
    int dp[n+1][m+1];
    fr(0,n+1)dp[i][0]=i;
    fr(0,m+1)dp[0][i]=i;
    fr(1,n+1){
        rep(j,1,m+1){
            if(s[i-1]==t[j-1]){
                dp[i][j] = dp[i-1][j-1];
            }
            else{
                dp[i][j] = 1+min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]});
            }
        }
    }
    return dp[n][m];
}

int main() {
   string s,t;
   cin>>s>>t;
    cout<<editDist(s,t);
}


