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
#define read_str(x) string temp; cin>>temp;
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x
#define read_ll(x) ll x; cin>>x;
using namespace std;

void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}


//convert adj matrix to adj list
// for(int i=0;i<n;i++){
//             for(int j=0;j<grid[0].size();i++){
//                 if(grid[i][j]==1 && i!=j){
//                     adj[i].push_back(j);
//                     adj[j].push_back(i);
//                 }
//             }
//         }


// void dfs( int node,vector<int> adj[], vector<int> &vis){
//    vis[node] =1;

//    // cout<<node<<" ";

//    for(auto it: adj){
//       if(!vis[it]){
//          dfs(it,adj,vis);
//       }
//    }


// }

// vector<int> bfs(int node, vector<int> adj[], int v){
//    vector<int> vis(v,0);
//    queue<int> q;
//    q.push(node); // enter the node you want to start the BFS with 
//    vis[node] =1;
//    vector<int> ans;
//    ans.pb(node);

//    while(!q.empty()){
//       node =  q.front();
//       q.pop();


//       for(auto it: adj[node]){
//          if(!vis[it]){
//             q.push(it);
//             ans.pb(it);
//          }
//       }
//    }

//    return ans;

// }

int main() {
   init_code();

   read(t);
   while(t--){
      int n,k;
      cin>>n>>k;
      string inp;
      cin>>inp;
      // int toFinish =n ;
      int start =1;
      // int i=0;
      int clock =true;

      for(int i=0;i<k;i++){
         if(inp[i]=='U'){
            if(clock){
               start+=1;
               if(start>n) start/=n;

            }else{
               start-=1;
               if(start>n) start/=n;
               if(start<1)start=n+start;
            }
            
         }else if(inp[i]=='S'){
            if(clock){
               start+=2;
               if(start>n) start/=n;
            }else{
               start-=2;
               if(start<1){
                  start=n+start;
               }
               if(start>n) start/=n;
            }

         }else{
            if(clock){
               clock=false;
               start-=1;
               if(start<1){
                  start=n+start;
               }
               if(start>n) start/=n;
            }else{
               clock=true;
               start+=1;
               if(start>n) start/=n;
            }
            // clock = false;
            
         }
         // cout<<start<<endl;
      }
      

      cout<<start<<endl;


      
   }

   return 0;
}