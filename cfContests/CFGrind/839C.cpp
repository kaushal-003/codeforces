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

double dfs(vector<vector<int>>&adj,int node,int parent){
    double prob =((1.0)*(adj[node].size()-1));
    if(parent==-1)prob++;
    double ans = 0;
    for(auto adj_node:adj[node]){
        if(adj_node!=parent)ans +=(1.0+dfs(adj,adj_node,node));
    }
    return (ans==0.0)?0:ans/prob;
}


int main() {
    init_code();
    int t;
    t = 1;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>>arr(n);
        fr(0,n-1){
            int a,b;
            cin>>a>>b;
            arr[a-1].push_back(b-1);
            arr[b-1].push_back(a-1);
        }
        prDouble(dfs(arr,0,-1));
    }
    return 0;

}


