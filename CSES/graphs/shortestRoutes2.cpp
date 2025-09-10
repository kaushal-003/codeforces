// There are n cities and m roads between them. 
//Your task is to process q queries where you have to determine 
//the length of the shortest route between two given cities.
// Input
// The first input line has three integers n, m and q: 
//the number of cities, roads, and queries.
// Then, there are m lines describing the roads. 
//Each line has three integers a, b and c: 
//there is a road between cities a and b whose length is c. All roads are two-way roads.
// Finally, there are q lines describing the queries. Each line has two integers a and b: 
//determine the length of the shortest route between cities a and b.
// Output
// Print the length of the shortest route for each query. 
//If there is no route, print -1 instead.


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
#define read(x) ll x; cin >> x // changed to read long long

using namespace std;

void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

class dsu{
    public:
    vector<int> parent;
    vector<int> rank;

    dsu(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }

    int findParent(int u){
        if(u == parent[u]) return u;
        return parent[u]=findParent(parent[u]);
    }
    void unionByRank(int u,int v){
        int pu = findParent(u);
        int pv = findParent(v);
        if(pu==pv) return;
        if(rank[pu]>rank[pv]){
            parent[pv]=pu;
        }
        else if(rank[pu]<rank[pv]){
            parent[pu]=pv;
        }
        else{
            rank[pu]++;
            parent[pu]=pv;
        }
    }
};

	void shortest_distance(vector<vector<ll>>&matrix){
	    // Code here
	    int n = matrix.size();
	    for(int k =0 ;k<n;k++)
	        for(int i=0;i<n;i++)
	        for(int j=0;j<n;j++){
	            if(matrix[i][j]==-1){
	                if(matrix[i][k]!=-1 && matrix[k][j]!=-1){
	                    matrix[i][j] = matrix[i][k]+matrix[k][j];
	                }
	            }
	            else{
	                if(matrix[i][k]!=-1 && matrix[k][j]!=-1){
	                    matrix[i][j] = min(matrix[i][j],matrix[i][k]+matrix[k][j]);
	                }
	            }
	        }
	}

int main(){
   init_code();
   read(n);
   read(m);
   read(q);
    vector<vector<ll>>arr(n,vector<ll>(n,-1));
    fr(0,n)arr[i][i]=0;     
   fr(0,m){
    ll a,b,c;
    cin>>a>>b>>c;
    arr[a-1][b-1]=(arr[a-1][b-1]==-1)?c: min(arr[a-1][b-1],c);
    arr[b-1][a-1]=(arr[b-1][a-1]==-1)?c: min(arr[b-1][a-1],c);
   }
   shortest_distance(arr);
    fr(0,q){
        int a,b;
        cin>>a>>b;
        cout<<arr[a-1][b-1]<<endl;
    }
   return 0;
}
