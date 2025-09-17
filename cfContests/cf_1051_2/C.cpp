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

void topologicalSortUtil(int v, vector<vector<int>> &adj, vector<bool> &visited, stack<int> &st)
{

    // Mark the current node as visited
    visited[v] = true;

    // Recur for all adjacent vertices
    for (int i : adj[v])
    {
        if (!visited[i])
            topologicalSortUtil(i, adj, visited, st);
    }

    // Push current vertex to stack which stores the result
    st.push(v);
}

vector<vector<int>> constructadj(int V, vector<vector<int>> &edges)
{

    vector<vector<int>> adj(V);
    for (auto it : edges)
    {
        adj[it[0]].push_back(it[1]);
    }

    return adj;
}

// Function to perform Topological Sort
vector<int> topologicalSort(int V, vector<vector<int>> &edges)
{

    // Stack to store the result
    stack<int> st;

    vector<bool> visited(V, false);
    vector<vector<int>> adj = constructadj(V, edges);
    // Call the recursive helper function to store
    // Topological Sort starting from all vertices one by
    // one
    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
            topologicalSortUtil(i, adj, visited, st);
    }

    vector<int> ans;

    // Append contents of stack
    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }

    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<vector<int>>arr(n,vector<int>(4));
        fr(0,n-1){
            cin>>arr[i][0]>>arr[i][1]>>arr[i][2]>>arr[i][3];
        }
        vector<vector<int>>edges;
        fr(0,n-1){
            if(arr[i][2]>arr[i][3]){
                edges.push_back({arr[i][0],arr[i][1]});
            }
            else{
                edges.push_back({arr[i][1],arr[i][0]});
            }
        }
        vector<int>ans = topologicalSort(n+1,edges);
        ans.pop_back();
        vector<int>ans2(n+1);
        // fr(0,n){
        //     cout<<ans[i]<<" ";
        // }
        // cout<<endl;
        fr(0,n){
            ans2[ans[i]] = n-i;
        }
        fr(1,n+1){
            cout<<ans2[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
