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

int dfs(vector<vector<pair<int,int>>>&adj,int node,int parent,vector<int>&arr){
    int ans = -1;
    for(auto adj_node:adj[node]){
        if(adj_node.first!=parent){
            int a = dfs(adj,adj_node.first,node,arr);
            if(a==-1 && adj_node.second==2){
                arr.push_back(adj_node.first);
                ans = 0;
            }
            if(a!=-1)ans = a;
        }
    }
    return ans;
}


int main() {
    init_code();
    int t;
    t = 1;
    while(t--){
        int n;
        cin>>n;
        vector<vector<pair<int,int>>>arr(n);
        fr(0,n-1){
            int a,b,c;
            cin>>a>>b>>c;
            arr[a-1].push_back({b-1,c});
            arr[b-1].push_back({a-1,c});
        }
        vector<int>ans;
        int a =  dfs(arr,0,-1,ans);
        cout<<ans.size()<<endl;
        fr(0,ans.size())cout<<ans[i]+1<<" ";
    }
    return 0;

}


