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

int dp[200005][2];

int helper(vector<vector<int>>&arr,int &n,int ind,int& k,int prev){
    if(ind==n) return 1;
    if(ind==0){
        int choose1 = helper(arr, n, ind+1 , k, 0);
        int choose2 = helper(arr,n,ind+1,k,1);
        return (choose1+choose2>0)?1:0;
    }
    if(dp[ind][prev]!=-1)return dp[ind][prev];
    int choose1 = (abs(arr[ind][0]-arr[ind-1][prev])<=k)?helper(arr,n,ind+1,k,0):0;
    int choose2 = (abs(arr[ind][1]-arr[ind-1][prev])<=k)?helper(arr,n,ind+1,k,1):0;
    return dp[ind][prev] = (choose1+choose2>0)?1:0;
}


int main() {
    int t=1;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<vector<int>>arr(n,vector<int>(2));
        fr(0,n){
            cin>>arr[i][0];
        }
        fr(0,n)cin>>arr[i][1];
        fr(0,n){
            rep(j,0,2)dp[i][j]=-1;
        }
        // dp[0][0]=1;
        // dp[1][1]=1;
        // fr(1,n){
        //     dp[i][0] = (dp[i-1][0]==1 && (abs(arr[i-1][0]-arr[i][0])<=k)) || (dp[i-1][1]==1 && (abs(arr[i-1][1]-arr[i][0])<=k));
        //     dp[i][1] = (dp[i-1][0]==1 && (abs(arr[i-1][0]-arr[i][1])<=k)) || (dp[i-1][1]==1 && (abs(arr[i-1][1]-arr[i][1])<=k));
        // }
        cout<<((helper(arr,n,0,k,0))?"Yes":"No")<<"\n";

    }


    return 0;


}
