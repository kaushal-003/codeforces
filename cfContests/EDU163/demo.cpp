/*
There are n pupils in Uolevi's class, and m friendships between them. 
Your task is to divide the pupils into two teams in such a way that no two pupils in a team are friends. 
You can freely choose the sizes of the teams.


Input
The first input line has two integers n and m: the number of pupils and friendships. The pupils are numbered 1,2,\dots,n.
Then, there are m lines describing the friendships. Each line has two integers a and b: pupils a and b are friends.
Every friendship is between two different pupils. You can assume that there is at most one friendship between any two pupils.


Output
Print an example of how to build the teams. For each pupil, print "1" or "2" depending on to which team the pupil will be assigned.
You can print any valid team.
If there are no solutions, print "IMPOSSIBLE".
*/ 

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

bool bfs(vector<vector<int>>&adj_list,int node,int n,vector<bool>&visited,vector<int>&color){

   // vector<bool>visited(n);
//    vector<int>color(n,-1);
   queue<int>q;
   q.push(node);
   visited[node]=true;
   int len=0;
   color[node]=0;
   while(!q.empty()){
    int new_node = q.front();
    // cout<<new_node<<endl;
    
    q.pop();
    for(auto adjNode:adj_list[new_node]){
        if(!visited[adjNode]){
            if(color[adjNode]==-1){
                q.push(adjNode);
                visited[adjNode]=true;
               // cout<<color[adjNode]<<" "<<color[new_node]<<endl;

                color[adjNode]=(color[new_node])?0:1;
                // cout<<color[adjNode]<<" "<<color[new_node]<<endl;
            }    
        }
        else{  
            if(color[new_node]==color[adjNode]){
                return false;
            }
        }
    }
   }
   return true;
}

vector<ll> dijkstra(vector<vector<vector<int>>>&adj, int n){
    vector<ll>dist(n,1e18);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    dist[0]=0;
    pq.push({0,0});
    while(!pq.empty()){
        auto it = pq.top();
        pq.pop();
        // cout<<it.first<<" "<<it.second<<endl;
        for(auto adj_node:adj[it.second]){
            if(dist[adj_node[0]]==1e18){
                dist[adj_node[0]] = dist[it.second] + adj_node[1];
                pq.push({dist[adj_node[0]],adj_node[0]});
            }
            else{
                if(dist[adj_node[0]] >= dist[it.second] + adj_node[1]){
                    pq.push({dist[adj_node[0]],adj_node[0]});
                }
            }
        }
    }
    return dist;
}

int main(){
   init_code();
   read(n);
   read(m);
   vector<vector<vector<int>>>adj_list(n);
   fr(0,m){
    vector<int>a(3);
    cin>>a[0]>>a[1]>>a[2];
    adj_list[a[0]-1].push_back({a[1]-1,a[2]});
    adj_list[a[1]-1].push_back({a[0]-1,a[2]});
   }
   vector<ll> ans  = dijkstra(adj_list,n);
   for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
   }
   cout<<endl;
   return 0;
}
