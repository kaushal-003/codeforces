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
 

ll dp[5001][5001][2];

ll findScore(vector<int>&arr,int si, int ei,int player){
    if(si==ei) return (player==0)?arr[si]:0;
    if(dp[si][ei][player]!=-1) return dp[si][ei][player];
    if(player==0){
    ll case1 = arr[si]+findScore(arr,si+1,ei,1-player);
    ll case2 = arr[ei]+findScore(arr,si,ei-1,1-player);
    return dp[si][ei][player]=max(case1,case2);
    }
    else{
        ll case1 = findScore(arr,si+1,ei,1-player);
        ll case2 = findScore(arr,si,ei-1,1-player);
        return dp[si][ei][player]=min(case1,case2);
    }
    
}


int main() {
   read(n);
   vector<int>arr(n);
   fr(0,n)cin>>arr[i];
   fr(0,5001){
    rep(j,0,5001){
        dp[i][j][0]=-1;
        dp[i][j][1]=-1;
    }
   }
   cout<<findScore(arr,0,n-1,0);
}


