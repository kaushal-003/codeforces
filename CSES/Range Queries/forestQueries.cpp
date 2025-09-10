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

    int main() {
    int n,q;
    cin>>n>>q;
    vector<vector<char>>grid(n,vector<char>(n));
    fr(0,n){
        rep(j,0,n)cin>>grid[i][j];
    }
    vector<vector<int>>prefix(n+1,vector<int>(n+1,0));
    fr(1,n+1){
        rep(j,1,n+1){
            prefix[i][j] = prefix[i][j-1]+prefix[i-1][j]-prefix[i-1][j-1]+(grid[i-1][j-1]=='*');
        }
    }
    while(q--){
        int x,y;
        int a,b;
        cin>>x>>y>>a>>b;
        cout<<prefix[a][b]-prefix[a][y-1]-prefix[x-1][b]+prefix[x-1][y-1]<<endl;
    }
    return 0;

    }


