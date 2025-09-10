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
 

int dice_combinations(int n){
    vector<ll>dp(n+1,0);
    for(int i=1;i<=min(6,n);i++){
        dp[i]=1;
    }
    for(int i = min(2,n);i<=n;i++){
        for(int j = 1;j<=6;j++){
            if(i-j>=0){
                dp[i] = (dp[i]+dp[i-j])%mod;
            }
        }
    }
    return dp[n];
}

int main() {
   int n;
   cin>>n;
    cout<<dice_combinations(n)<<endl;
}


