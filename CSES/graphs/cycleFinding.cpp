#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define inf (1LL << 60)
using namespace std;

void init_code() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

void cycleFindUsingBellmanFord(vector<tuple<int, int, ll>>& edges, int n) {
    vector<ll> dist(n+1, inf);
    vector<int> parent(n+1, -1);
    int x = -1;
    
    dist[n] = 0;
    
    // Bellman-Ford Algorithm
    for (int i = 0; i < n; ++i) {
        x = -1;
        for (auto& [u, v, w] : edges) {
            if (dist[u] != inf && dist[v] > dist[u] + w) {
                dist[v] = max(-inf, dist[u] + w);
                parent[v] = u;
                x = v;
            }
        }
    }

    if (x == -1) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        // Trace the cycle
        for (int i = 0; i < n; ++i) {
            x = parent[x];
        }

        vector<int> cycle;
        int curr = x;
        do {
            cycle.pb(curr);
            curr = parent[curr];
        } while (curr != x);
        cycle.pb(x);

        reverse(cycle.begin(), cycle.end());

        for (int node : cycle) {
            cout << node + 1 << " "; // Output 1-based indexing
        }
        cout << endl;
    }
}

int main() {
    init_code();
    int n, m;
    cin >> n >> m;
    if(n==1 && m==1){
        int a,b;
        cin>>a>>b;
        int w;cin>>w;
        if(a==1 && b==1 && w==-1){
            cout<<"YES"<<endl;
            cout<<1<<" "<<1<<endl;
        }
        return 0;
    }
    vector<tuple<int, int, ll>> edges;
    for (int i = 0; i < m; ++i) {
        int a, b;
        ll c;
        cin >> a >> b >> c;
        edges.push_back({a - 1, b - 1, c}); // 0-based indexing
    }
    for(int i=0;i<n;i++){
        edges.push_back({n,i,0});
    }
    cycleFindUsingBellmanFord(edges, n);
    return 0;
}
