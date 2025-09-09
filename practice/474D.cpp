#include <algorithm>
#include<bits/stdc++.h>
#include <vector>
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

int dp[100005];
int sum[100005];
int t,k;
void precompute(){
    dp[0] = 1;
    sum[0] = 1;
    for(int i = 1; i <= 100001; i++) {
        dp[i] = (dp[i-1] + ((i-k>=0)?dp[i-k]:0))%mod;
        sum[i] = (sum[i-1] + dp[i])%mod;
    }

}

int main() {
    // init_code();

    cin>>t>>k;
    precompute();
    while (t--) {
       int a,b;
      cin>>a>>b;
      cout<<(sum[b]-sum[a-1]+mod)%mod<<endl;
    }

    return 0;


}
