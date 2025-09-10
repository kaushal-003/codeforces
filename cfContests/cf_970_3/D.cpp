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
#define read(x) ll x; cin >> x

using namespace std;

void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

bool hascycle(vector<vector<int>>&adj,vector<int>&visited,int node){
    if(visited[node]!=-1)return true;
    visited[node]=1;
    return hascycle(adj,visited,adj[node][0]);
}

int countb(vector<vector<int>>&adj,vector<int>&visited,int node,string&s){
    if(visited[node]!=-1)return 0;
    visited[node]=1;
    return (s[node-1]=='0'?1:0)+countb(adj,visited,adj[node][0],s);
}

void makeC(vector<vector<int>>&adj,int node,int val,vector<int>&ans){
    if(ans[node]!=-1)return;
    ans[node] = val;
    makeC(adj,adj[node][0],val,ans);
}

void dfs(vector<vector<int>>&adj,int node,string& s,vector<int>&ans){
    if(s[node-1]=='0')ans[node]=1;
    else ans[node] = 0;
    for(auto adj_node:adj[node]){
        if(ans[adj_node]==-1){
            dfs(adj,adj_node,s,ans);
            ans[node] = ans[adj_node];
        }
        else ans[node]+=ans[adj_node];
    }
    return;
}

int main(){ 
    init_code();
    read(t);
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        fr(0,n)cin>>arr[i];
        string s;
        cin>>s;
        vector<vector<int>>adj(n+1);
        fr(1,n+1){
            adj[i].push_back(arr[i-1]);
        }
        vector<int>ans(n+1,-1);
        vector<int>visited(n+1,-1);
        vector<int>visited2(n+1,-1);
        fr(1,n+1){
            if(ans[i]==-1){
                bool b = hascycle(adj,visited,i);
                if(b){
                    int a = countb(adj,visited2,i,s);
                    makeC(adj,i,a,ans);
                }
                else{
                    dfs(adj,i,s,ans);
                }
                
            }
        }
        fr(1,n+1){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}