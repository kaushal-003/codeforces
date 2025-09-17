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

int dp[5005][5005];

int helper(vector<int>&arr,int& n, int ind,int prev){
    if(ind ==n)return 0;
    if(prev == -1){
        return max(helper(arr,n,ind+1,-1),1 + helper(arr,n,ind+1,arr[ind]));
    }

    if(dp[ind][prev]!=-1)return dp[ind][prev];
    int take = (prev<=arr[ind])?(1 +helper(arr,n,ind+1,arr[ind])):0;
    int notTake = helper(arr,n,ind+1,prev);
    return dp[ind][prev] = max(take,notTake);
}
int main() {
    int t=1;
    while (t--) {
       int n,m;
       cin>>n>>m;
       fr(0,5005){
           rep(j,0,5005){
               dp[i][j] = -1;
           }
       }
       vector<int>arr(n);
       fr(0,n){
           int a;
           float b;
           cin>>a>>b;
           arr[i] = a;
       }
       cout<<(n - helper(arr,n,0,-1))<<endl;
    }


    return 0;


}
