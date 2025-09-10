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


ll dfs(vector<vector<int>>&adj_list,int node,vector<int>&val){
    ll ans = 1e18;
    for(auto n:adj_list[node]){
        ans = min(ans,dfs(adj_list,n,val));
    }
    if(ans==1e18){
        // cout<<node<<" "<<val[node]<<endl;
        return val[node];
    }
    else{
        if(val[node]>ans){
            return ans;
        }
        else{
            return val[node] +((ans-val[node])/2);
        }
    }
}

int main(){
   init_code();
   read(t);
   while(t--){
    int n;
    cin>>n;
    vector<int>val(n);
    fr(0,n)cin>>val[i];
    vector<vector<int>>adj_list(n);
    fr(0,n-1){
        int a;
        cin>>a;
        adj_list[a-1].push_back(i+1);
    }
    ll ans = 1e18;
    for(auto n:adj_list[0]){
        ans = min(ans,dfs(adj_list,n,val));
    }    
    cout<<ans+val[0]<<endl;
   }
   return 0;
}
