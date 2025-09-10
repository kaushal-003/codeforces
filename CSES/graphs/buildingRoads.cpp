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

void dfs(vector<vector<int>>&adj_list,int node,vector<bool>&visited){
   if(visited[node])return;
   visited[node]=true;
   for(auto adj_node:adj_list[node]){
      if(visited[adj_node]==false)dfs(adj_list,adj_node,visited);
      
   }
   return;
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
   vector<int>ans;
   for(int i=0;i<n;i++){
      if(visited[i]==false){
         dfs(adj_list,i,visited);
         ans.push_back(i);
      }
   }
   int k = ans.size();
      cout<<k-1<<endl;
      fr(0,k-1){
         cout<<ans[i]+1<<" "<<ans[i+1]+1<<endl;
      }
   
   return 0;
}
