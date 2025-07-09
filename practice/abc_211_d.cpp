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

ll bfs(int node,vector<int>adj[],int n){
    queue<ll>q;
    vector<ll>dp(n+1,-1);
    vector<ll>cnt(n+1,-1);
    dp[1]=0;
    cnt[1] = 1;
    q.push(1);

    while(!q.empty()){
        auto node=q.front();
        q.pop();
        for (auto adj:adj[node]){
            if(dp[adj]==-1){
                dp[adj]=dp[node]+1;
                cnt[adj]=cnt[node]%mod;
                q.push(adj);
            }
            else if(dp[adj]==dp[node]+1){
                cnt[adj]+=cnt[node]%mod;
            }
        }
    }
    return cnt[n] ;
}

int main() {
    int t=1;
    while (t--) {
        int n,m;
        cin>>n>>m;
        vector<int>adj[n+1];
        for(int i=0;i<m;i++){
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        auto count=bfs(1,adj,n);
        cout<<count<<endl;
    }

    return 0;


}
