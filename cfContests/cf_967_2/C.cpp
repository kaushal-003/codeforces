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

void func(int u,int v,vector<int>&parent,vector<int>&visited){
    cout<<"? "<<u<<" "<<v<<endl;
    cout.flush();
    int x;
    cin>>x;
    if(x==u || x==v){
        parent[v] = u;
        visited[v] = 1;
        return;
    }
    if(!visited[x]){
        func(u,x,parent,visited);
    }
    func(x,v,parent,visited);
}

int main(){
    // init_code();
    read(t);
    while(t--){
        int n;
        cin>>n;
        vector<int>visited(n+1,0);
        vector<int>parent(n+1);
        visited[1]=1;
        fr(2,n+1){
            if(!visited[i])func(1,i,parent,visited);
        }
        cout<<"! ";
        fr(2,n+1){
            cout<<parent[i]<<" "<<i<<" ";
        }
        cout<<endl;
        cout.flush();
    }
    return 0;
}