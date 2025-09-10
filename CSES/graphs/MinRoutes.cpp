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

int bfs(vector<vector<int>>&adj_list,int node,int n,int finalNode, vector<int>&parent){

   vector<bool>visited(n);
   queue<int>q;
   q.push(node);
   visited[node]=true;
   int len=0;
   while(!q.empty()){
    int new_node = q.front();
    // cout<<new_node<<endl;
    if(new_node == finalNode) 
      {
         return 0;
      }
    q.pop();
    for(auto adjNode:adj_list[new_node]){
        if(!visited[adjNode]){
         // cout<<adjNode<<" "<<new_node<<endl;
            parent[adjNode]=new_node;
            q.push(adjNode);
            visited[adjNode]=true;
        }
    }
   }
   return -1;
}


int main() {
   init_code();
   read(n);
   read(m);
   vector<vector<int>>adj_list(n);
   fr(0,m){
      int a,b;
      cin>>a>>b;
      adj_list[a-1].push_back(b-1);
      adj_list[b-1].push_back(a-1);

   }
   vector<bool>visited(n);
   vector<int>parent(n,0);
   vector<int>ans;
   
   int a=bfs(adj_list,0,n,n-1,parent);
   // fr(0,n)cout<<parent[i]<<endl;
    if(a==-1){
        cout<<"IMPOSSIBLE"<<endl;
    }
    else{
        vector<int>ans;
        int node=n-1;
        while(node!=0){
         // cout<<node<<endl;
            node = parent[node];
            ans.push_back(node+1);
        }
        cout<<ans.size()+1<<endl;
        for(int i=ans.size()-1;i>=0;i--){
         cout<<ans[i]<<" ";
        }
        cout<<n<<endl;
    }
   
   return 0;
}
