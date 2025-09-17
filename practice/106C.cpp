    #include<bits/stdc++.h>
    #include <iostream>
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
    int dp[11][1001];

    int helper(vector<vector<int>>&arr, int &m, int ind, int n,int& a, int& b){
        if(n<=0)return 0;
        if(ind==m)return (n/a)*b;
        int take = 0;
        if(dp[ind][n]!=-1)return dp[ind][n];

        int buns = n/arr[ind][2];
        int stuff = arr[ind][0]/arr[ind][1];
        int mn = min(buns,stuff);
        for(int i=0;i<=mn;i++){
            take = max(take,i*arr[ind][3] +helper(arr,m,ind+1,n-i*arr[ind][2],a,b));
        }

        return dp[ind][n]=take;
    }

    int main() {
        int t=1;
        while (t--) {
        int n,m,c,d;
        cin>>n>>m>>c>>d;
        vector<vector<int>>arr(m,vector<int>(4));
        fr(0,m){
            rep(j,0,4){
                cin>>arr[i][j];
            }
        }
        fr(0,11){
            rep(j,0,1001){
                dp[i][j]=-1;
            }
        }
        cout<<helper(arr,m,0,n,c,d)<<endl;
        }


        return 0;


    }
