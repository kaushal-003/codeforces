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

void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        string s="";
        vector<int>dp(n+1,0);
        dp[0]=1;
        dp[1] = 2;
        fr(2,n+1){
            dp[i] = (dp[i-1] + dp[i-2]);
        }
        while(m--){
            vector<int>cube(3);
            cin>>cube[0]>>cube[1]>>cube[2];
            sort(cube.begin(),cube.end());
            // cout<<"cube: "<<cube[2]<<" "<<cube[1]<<" "<<cube[0]<<endl;
            // cout<<"dp: "<<dp[n]<<" "<<dp[n-1]<<" "<<dp[n-2]<<endl;
            if(dp[n] <=cube[2] && dp[n-1]<=cube[0])
                s+="1";
            else
                s+="0";
        }
        cout<<s<<endl;
    }

    return 0;


}
