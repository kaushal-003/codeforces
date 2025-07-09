
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

void findConncectedComponents(vector<vector<int>>&adj,int node,int n,vector<int>&visited){
    if(visited[node]==1)return;
    visited[node] = 1;
    for(auto adjNode:adj[node]){
        findConncectedComponents(adj,adjNode,n,visited);
    }
    return;
}

int N = 2*1e5+35;
int main() {
    int t = 1;
    while (t--) {
        int n;
        cin >> n;
        vector<string> a(n);
        fr(0,n){
            cin >> a[i];
        }
        vector<vector<int>>adj(N);
        for(int i = 0;i<n;i++){
            string s = a[i];
            for(auto c:s){
                adj[n+c-'a'].pb(i);
                adj[i].pb(n+c-'a');
            }
        }
        ll count = 0;
        vector<int>visited(N,0);
        for(int i= 0;i<n;i++){
            if(visited[i]==0){
                count++;
                findConncectedComponents(adj,i,n,visited);
            }
        }
        cout<<count<<endl;
    }

    return 0;


}
