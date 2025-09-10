#include<bits/stdc++.h>
#include<unordered_map>
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

struct pair_hash {
    template <class T1, class T2>
    std::size_t operator () (const std::pair<T1, T2>& p) const {
        auto h1 = std::hash<T1>{}(p.first);
        auto h2 = std::hash<T2>{}(p.second);
        return h1 ^ h2;
    }
};

void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}



#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void dfs(int node, int parent, const unordered_map<int, vector<int>>& graph, vector<int>& subtree_sizes) {
    int size = 1;
    for (int child : graph.at(node)) {
        if (child != parent) {
            dfs(child, node, graph, subtree_sizes);
            size += subtree_sizes[child];
        }
    }
    subtree_sizes[node] = size;
}

vector<int> count_falling_pairs(int t, const vector<pair<int, vector<pair<int, int>>>>& trees) {
    vector<int> results;

    for (int i = 0; i < t; i++) {
        int n = trees[i].first;
        const vector<pair<int, int>>& edges = trees[i].second;
        unordered_map<int, vector<int>> graph;

        for (const auto& edge : edges) {
            int u = edge.first;
            int v = edge.second;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        vector<int> subtree_sizes(n + 1);
        dfs(1, 0, graph, subtree_sizes);

        int q;
        cin >> q;
        vector<pair<int, int>> assumptions(q);
        for (int j = 0; j < q; j++) {
            cin >> assumptions[j].first >> assumptions[j].second;
        }

        vector<int> x_counts(n + 1);
        vector<int> y_counts(n + 1);

        for (const auto& assumption : assumptions) {
            int x = assumption.first;
            int y = assumption.second;
            x_counts[x] += 1;
            y_counts[x] += 1;
        }

        for (const auto& edge : edges) {
            int u = edge.first;
            int v = edge.second;
            if (subtree_sizes[u] > subtree_sizes[v]) {
                x_counts[v] += x_counts[u];
                y_counts[v] += y_counts[u];
            } else {
                x_counts[u] += x_counts[v];
                y_counts[u] += y_counts[v];
            }
        }

        int pairs = 0;
        for (int u = 1; u <= n; u++) {
            if (x_counts[u] == 0 || y_counts[u] == 0) {
                pairs++;
            }
        }

        results.push_back(pairs);
    }

    return results;
}

int main() {
    init_code();
    int t;
    cin >> t;

    vector<pair<int, vector<pair<int, int>>>> trees(t);
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<pair<int, int>> edges(n - 1);
        for (int j = 0; j < n - 1; j++) {
            cin >> edges[j].first >> edges[j].second;
        }
        trees[i] = make_pair(n, edges);
    }

    vector<int> results = count_falling_pairs(t, trees);

    for (int i = 0; i < t; i++) {
        cout << results[i] << endl;
    }

    return 0;
}
