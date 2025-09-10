#include <bits/stdc++.h>
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
#define read(x) ll x; cin >> x // changed to read long long

using namespace std;

void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

class dsu{
    public:
    vector<int> parent;
    vector<int> rank;

    dsu(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }

    int findParent(int u){
        if(u == parent[u]) return u;
        return parent[u]=findParent(parent[u]);
    }
    void unionByRank(int u,int v){
        int pu = findParent(u);
        int pv = findParent(v);
        if(pu==pv) return;
        if(rank[pu]>rank[pv]){
            parent[pv]=pu;
        }
        else if(rank[pu]<rank[pv]){
            parent[pu]=pv;
        }
        else{
            rank[pu]++;
            parent[pu]=pv;
        }
    }
};

void dfs(vector<vector<int>> &adj_list,int node,vector<int>&ans){
    ans[node]  = 0;
    for(auto it:adj_list[node]){
        dfs(adj_list,it,ans);
        ans[node]+=(ans[it]+1);
    }
    return;
}


int main(){
    read(n);
    vector<vector<int>> adj_list(n+1);
    fr(0,n-1){
        int a;
        cin>>a;
        adj_list[a].push_back(i+2);
    }
    vector<int>visited(n+1);
    vector<int>ans(n+1);
    dfs(adj_list,1,ans);
    fr(1,n+1)cout<<ans[i]<<" ";
    cout<<endl;
}
