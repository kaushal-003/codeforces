#include<bits/stdc++.h>
#include <climits>
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

int dp[501][501][501];

int helper(vector<int>&arr,vector<int>&speed,int& n, int& k,int &l,int ind,int prev,int remove){
    if(ind == n)return (l-arr[prev])*speed[prev];

    if(dp[ind][prev][remove] != -1)return dp[ind][prev][remove];

    int end = speed[prev]*(arr[ind]-arr[prev])+ helper(arr,speed,n,k,l,ind+1,ind,remove+1);
    int notend = (remove<k)?helper(arr,speed,n,k,l,ind+1,prev,remove):INT_MAX;
    return dp[ind][prev][remove] = min(end,notend);
}

int main() {
    // init_code();
    int t;
    t = 1;
    while (t--) {
        int n,l,k;
        cin>>n>>l>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        vector<int>speed(n);
        for(int i=0;i<n;i++)cin>>speed[i];
        fr(0,501){
            rep(j,0,501){
                rep(k,0,501){
                    dp[i][j][k] = -1;
                }
            }
        }
        fr(0,501){
            rep(j,0,501){
                rep(k,0,501){
                    dp[i][j][k] = ;
                }
            }
        }
        cout<<helper(arr,speed,n,k,l,1,0,0)<<endl;
    }

    return 0;


}
