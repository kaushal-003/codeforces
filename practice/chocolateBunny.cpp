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
#define read(x) ll x; cin >> x
using namespace std;

int dfs(vector<int>&visited,int n,int m,int node,vector<vector<int>>&adj_list,int val,vector<int>&arr){
    // cout<<(val+arr[node])<<" "<<adj_list[node].size()<<endl;
    if(adj_list[node].size()==1 & node!=0){
        visited[node]  = 1;
        if(val+arr[node]<=m)return 1;
        return 0;
    }
    int ans = 0;
    visited[node] = true;
    for(auto it:adj_list[node]){
        if(!visited[it]){
            if(arr[node]==1 && val+1<=m)ans += dfs(visited,n,m,it,adj_list,val+1,arr);
            else if(arr[node]==1 && val+1>m) {
                ans = ans;
            }
            else ans += dfs(visited,n,m,it,adj_list,0,arr);
        }
    }
    return ans;

}

void solve(){
    int n;
    cin>>n;
    int ind=-1;
    int c = 0;
    int mx = 1;
    vector<int>ans(n+1,0);
    fr(2,n+1){
        int k1,k2;
        cout<<"? "<< i<< " "<<mx<<endl;
        cin>>k1;
        cout<<"? "<< mx<< " "<<i<<endl;
        cin>>k2;
        if(k1>k2)ans[i] = k1;
        else {
            ans[mx]=k2;
            mx = i;
        }
    }
    fr(1,n+1){
        if(ans[i]==0)ans[i] = n;
    }
    cout<<"! ";
    fr(1,n+1){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    solve();
    return 0;
}
