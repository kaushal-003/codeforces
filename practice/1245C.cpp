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

ll dp[100005][2][2];
ll helper(string& s, int& n,int prev_n,int prev_u,int ind){
    if(ind==n)return 1;
    if(s[ind]=='w' || s[ind]=='m')return 0;
    if(dp[ind][prev_n][prev_u]!=-1)return dp[ind][prev_n][prev_u];
    if(s[ind]=='n' && prev_n==1){
        return dp[ind][prev_n][prev_u]=(helper(s,n,0,0,ind+1)+helper(s,n,1,0,ind+1))%mod;
    }
    else if(s[ind]=='u' && prev_u==1){
        return dp[ind][prev_n][prev_u]=(helper(s,n,0,1,ind+1)+helper(s,n,0,0,ind+1))%mod;
    }
    return dp[ind][prev_n][prev_u]=(helper(s,n,s[ind]=='n',s[ind]=='u',ind+1))%mod;
}

int main() {
    int t=1;
    while (t--) {
        string s;
        cin>>s;
        int n = s.size();
        memset(dp,-1,sizeof(dp));
        cout<<helper(s,n,0,0,0)<<endl;

    }


    return 0;


}
