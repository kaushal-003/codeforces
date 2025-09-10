#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL << 60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) printf("%.10f", x)
#define triplet pair<ll, pair<ll, ll>>
#define goog(tno) printf("Case #%d: ", tno)
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define read(x) \
    int x;      \
    scanf("%d", &x)
using namespace std;

bool isValid(vector<vector<char>>& grid, vector<vector<int>>& visited, int i, int j, int n, int m) {
    if (i < 0 || i >= n || j < 0 || j >= m) return false;
    if (visited[i][j] > 0 || grid[i][j] == '*') return false;
    return true;
}

void bfs(vector<vector<char>>& grid, vector<vector<int>>& visited, int i1, int j1, int n, int m, int timer) {
    queue<pair<int, int>> q;
    q.push({i1, j1});
    visited[i1][j1] = timer;
    while (!q.empty()) {
        pair<int, int> p = q.front();
        q.pop();
        int i = p.first;
        int j = p.second;
        if (isValid(grid, visited, i + 1, j, n, m)) {
            visited[i + 1][j] = timer;
            q.push({i + 1, j});
        }
        if (isValid(grid, visited, i - 1, j, n, m)) {
            visited[i - 1][j] = timer;
            q.push({i - 1, j});
        }
        if (isValid(grid, visited, i, j + 1, n, m)) {
            visited[i][j + 1] = timer;
            q.push({i, j + 1});
        }
        if (isValid(grid, visited, i, j - 1, n, m)) {
            visited[i][j - 1] = timer;
            q.push({i, j - 1});
        }
    }
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    vector<vector<char>> grid(n, vector<char>(m));
    vector<vector<int>> visited(n, vector<int>(m, 0));
    int timer = 1;

    fr(0, n) {
        rep(j, 0, m) scanf(" %c", &grid[i][j]);
    }

    fr(0, n) {
        rep(j, 0, m) {
            if (visited[i][j] == 0 && grid[i][j] == '.') {
                bfs(grid, visited, i, j, n, m, timer);
                timer++;
            }
        }
    }
    // fr(0, n) {
    //     rep(j, 0, m) {
    //         cout<<visited[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    map<int, int> mpp;
    fr(0, n) {
        rep(j, 0, m) {
            if(grid[i][j]=='.')mpp[visited[i][j]]++;
        }
    }

    fr(0, n) {
        rep(j, 0, m) {
            if (grid[i][j] == '.') {
                printf(".");
                continue;
            }
            set<int> a;
            if (i > 0) a.insert(visited[i - 1][j]);
            if (j > 0) a.insert(visited[i][j - 1]);
            if (i < n - 1) a.insert(visited[i + 1][j]);
            if (j < m - 1) a.insert(visited[i][j + 1]);

            int ans = 1;
            for (auto it : a) {
                ans += mpp[it];
            }
            printf("%d", ans%10);
        }
        printf("\n");
    }

    return 0;
}
