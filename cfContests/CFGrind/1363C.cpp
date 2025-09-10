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

int dfs(vector<vector<int>>&adj,int node,int parent){
    int ans = 0;
    for(auto adj_node:adj[node]){
        if(adj_node!=parent){
            int k = dfs(adj,adj_node,node);
            ans += (1+k);
        }
    }
    return ans;
}


int main() {
    init_code();
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<vector<int>>arr(n);
        fr(0,n-1){
            int a,b;
            cin>>a>>b;
            arr[a-1].push_back(b-1);
            arr[b-1].push_back(a-1);
        }
        if(arr[x-1].size() <= 1)
			cout << "Ayush" << endl;
		else
		{
			if(n % 2)
				cout << "Ashish" << endl;
			else
				cout << "Ayush" << endl;
		}

    }
    return 0;

}


