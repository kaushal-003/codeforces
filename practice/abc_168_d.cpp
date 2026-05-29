#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL << 60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll, pair<ll, ll>>
#define goog(tno) cout << "Case #" << tno << ": "
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define read(x) int x;  cin >> x
using namespace std;


int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>adj(n);
    fr(0,m){
        int a,b;
        cin>>a>>b;
        adj[a-1].push_back(b-1);
        adj[b-1].push_back(a-1);
    }
    vector<int>visited(n,0);
    vector<int>dist(n,-1);
    queue<pair<int,int>>q;
    q.push({0,0});
    visited[0] = 1;
    while(!q.empty()){
       auto a = q.front();
       q.pop();
       int node = a.first;
       dist[node] = a.second;
       for(auto adj_node:adj[node]){
        if(!visited[adj_node]){
            visited[adj_node] = 1;
            q.push({adj_node,node});
        }
       }
    }
    bool b = true;
    fr(1,n){
        if(!visited[i])b = false;
    }
    if(b){
        cout<<"Yes"<<endl;
        fr(1,n)cout<<dist[i]+1<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    
}
