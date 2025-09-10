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
#define read(x) int x; cin >> x // changed to read long long

using namespace std;

void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

void dfs(vector<vector<int>> &adj_list,int node,vector<int>&ans){
    int a  = 0;
    for(auto it:adj_list[node]){
        dfs(adj_list,it,ans);
        int childMax = 0;
        for(auto it2:adj_list[it]){
            childMax = max(childMax,ans[it2]);
        }
        childMax++;
        a = max(a,childMax);
        a = max(a,ans[it]);
    }
    ans[node] = a;
    return;
}


int main(){
    read(n);
    vector<vector<int>> adj_list(n+1);
    fr(0,n-1){
        int a,b;
        cin>>a>>b;
        adj_list[min(a,b)].push_back(max(a,b));
    }
    vector<int>visited(n+1);
    vector<int>ans(n+1,0);
    dfs(adj_list,1,ans);
    fr(0,n+1)cout<<ans[i]<<" ";
    cout<<endl;
    cout<<ans[1]<<endl;
}
