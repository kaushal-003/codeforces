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
 

bool dfs(vector<set<int>>&adj_list,int node,vector<int>&visited){
   if(visited[node]==1)return true;
   bool ans =false;
   visited[node]=1;
   for(auto adj_node:adj_list[node]){
      if(visited[adj_node]==1) return true;
      bool b= dfs(adj_list,adj_node,visited);
      if(b ==true) return true;
   }
   visited[node]=2;

   return false;
}

bool hasCycle(vector<set<int>>&adj_list,int n){
   vector<int>visited(n);
   bool ans =false;
   for(int i=0;i<n;i++){
      if(visited[i]==0){
         ans = ans| dfs(adj_list,i,visited);
      }
      if(ans)break;
   }
   return ans;
}

void bfs(vector<set<int>>&adj_list, vector<int>& ans,int nodes){
    vector<int>indegree(nodes);
    // vector<int>visited(nodes,0);
    for(int i=0;i<nodes;i++){
        for(auto adj_node:adj_list[i]){
            indegree[adj_node]++;
        }
    }
    queue<int>q;
    for(int i=0;i<nodes;i++){
        if (indegree[i] == 0) {
            q.push(i);
            indegree[i] = -1;
        }
    }
    while(!q.empty()){
        int node = q.front();
        q.pop();
        ans.push_back(node);
        for(auto adj_node:adj_list[node]){
            indegree[adj_node]--;
            if (indegree[adj_node] == 0) {
              q.push(adj_node);
              indegree[adj_node] = -1;
            }
        }
        
    }
    return;
}
vector<int> topologicalSort(vector<set<int>> &adj_list, int nodes) {
    // Write your code here!
    vector<int>ans;
    bfs(adj_list,ans,nodes);
    return ans;
}


pair<int,string> pathLen(int n,int m,vector<vector<char>>&grid,vector<vector<bool>>&visited,int i,int j,string&s,int ei,int ej){
   if(i==ei && j == ej) {
      cout<<1<<endl;
      return {s.size(),s};
   }
   pair<int,string> ans = {-1,""};
   if(i+1<n && visited[i+1][j]==false && grid[i+1][j]!='#'){
       visited[i+1][j]=true;
       s+='D';
       pair<int,string> k = pathLen(n,m,grid,visited,i+1,j,s,ei,ej);
       s.pop_back();
       if(ans.first==-1) ans=k;
       else if(k.first>-1 && ans.first>k.first) ans = k;
   } 
   if(i-1>=0 && visited[i-1][j]==false && grid[i-1][j]!='#'){
       visited[i-1][j]=true;
       s+='U';
       pair<int,string> k = pathLen(n,m,grid,visited,i-1,j,s,ei,ej);
       s.pop_back();
        if(ans.first==-1) ans=k;
       else if(k.first>-1 && ans.first>k.first) ans = k;
   } 
   if(j+1<m && visited[i][j+1]==false && grid[i][j+1]!='#'){
       visited[i][j+1]=true;
       s+='R';
       pair<int,string> k = pathLen(n,m,grid,visited,i,j+1,s,ei,ej);
       s.pop_back();
        if(ans.first==-1) ans=k;
       else if(k.first>-1 && ans.first>k.first) ans = k;
   } 
   if(j-1>=0 && visited[i][j-1]==false && grid[i][j-1]!='#'){
       visited[i][j-1]=true;
       s+='L';
       pair<int,string> k = pathLen(n,m,grid,visited,i,j-1,s,ei,ej);
       s.pop_back();
        if(ans.first==-1) ans=k;
       else if(k.first>-1 && ans.first>k.first) ans = k;
   }
   return ans; 
}

int main() {
   init_code();
      read(n);
      read(m);
      vector<vector<char>>grid(n,vector<char>(m));
      vector<vector<bool>>visited(n,vector<bool>(m));
      int si,sj,ei,ej =-1;
      fr(0,n){
         string s;
         cin>>s;
         rep(j,0,m){
            grid[i][j]=s[j];
            if(grid[i][j]=='A'){
               si = i;
               sj =j;
            }
            if(grid[i][j]=='B'){
               ei = i;
               ej =j;
            }

         }
      }
      string path = "";
      visited[si][sj]=true;
      pair<int,string> ans =pathLen(n,m,grid,visited,si,sj,path,ei,ej);
      if(ans.first==-1){
         cout<<"NO"<<endl;
      }
      else{
         cout<<"YES"<<endl;
         cout<<ans.first<<endl;
         cout<<ans.second<<endl;
      }
   return 0;
 
}
