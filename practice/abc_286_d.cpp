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

int dp[51][10001][51];

int helper(vector<vector<int>>&arr,int &n,int ind, int x, int k){
    if(ind == n) return (x==0)?1:0;
    if(x<0 || k<0) return 0;
    if(dp[ind][x][k]!=-1) return dp[ind][x][k];
    int take = helper(arr,n,ind,x-arr[ind][0],k-1);
    int notTake = helper(arr,n,ind+1,x,(ind+1<n)?arr[ind+1][1]:0);
    if(take==0 && notTake==0)return dp[ind][x][k] = 0;
    return dp[ind][x][k] = 1;
}


int main() {
    int t=1;
    while (t--) {
        int n,x;
        cin>>n>>x;
        vector<vector<int>>arr(n,vector<int>(2));
        fr(0,n){
            cin>>arr[i][0]>>arr[i][1];
        }
        fr(0,51){
            rep(j,0,10001){
                rep(k,0,51){
                    dp[i][j][k] = -1;
                }
            }
        }
        cout<<(helper(arr,n,0,x,arr[0][1])?"Yes":"No")<<endl;
    }


    return 0;


}
