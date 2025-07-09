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

void traversal(vector<vector<int>>&graph,int node,int& count1,int & count2,int color,int parent){
    if(graph[node].size()==1 && graph[node][0]==parent){
        if(color==1){
            count1++;
        }
        else{
            count2++;
        }
        return;
    }
    if(color==1){
        count1++;
    }
    else{
        count2++;
    }
    for(auto adj:graph[node]){
        if(adj!=parent){
            traversal(graph, adj, count1, count2, 1-color, node);
        }
    }
    return;
}

ll helper(vector<vector<int>>&graph,int node, int parent,ll & ans,int color,int count1, int count2){

}


int main() {
    // init_code();
    int t;
    t = 1;
    while (t--) {
        int n;
        cin>>n;
        vector<vector<int>>a(n);
        fr(0,n-1){
            int a1,b;
            cin>>a1>>b;
            a[a1-1].pb(b-1);
            a[b-1].pb(a1-1);
        }
        int c1=0,c2=0;
        traversal(a,0,c1,c2,0,-1);
        cout<<c1<<" "<<c2<<endl;

    }

    return 0;


}
