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

ll dp[100005][3];
ll helper(vector<pair<ll,ll>>&arr,int &n,int ind,int row){
    if(ind==n)return 0;
    if(row==0){
        ll choose_from_1 = arr[ind].first + helper(arr,n,ind+1,1);
        ll choose_from_2 = arr[ind].second + helper(arr,n,ind+1,2);
        return max(choose_from_1,choose_from_2);
    }
    else if(row==1){
        ll choose_from_2 = arr[ind].second + helper(arr,n,ind+1,2);
        ll not_choose = helper(arr,n,ind+1,1);
        return max(choose_from_2,not_choose);
    }
    ll choose_from_1 = arr[ind].first + helper(arr,n,ind+1,1);
    ll not_choose = helper(arr,n,ind+1,2);
    return max(choose_from_1,not_choose);
}

int main() {
    int t=1;
    while (t--) {
        int n;
        cin>>n;
        vector<pair<ll,ll>>arr(n);
        fr(0,n)cin>>arr[i].first;
        fr(0,n)cin>>arr[i].second;
        fr(0,n){
            rep(j,0,3){
                dp[i][j]=-1;
                if(j==0)dp[i][j]= 0;
            }
        }
        dp[0][1] = arr[0].first;
        dp[0][2] = arr[0].second;
        fr(1,n){
            rep(j,1,3){
                if(j==1){
                    dp[i][1] = max(dp[i-1][2]+arr[i].first,dp[i-1][1]);
                }
                else if(j==2){
                    dp[i][2] = max(dp[i-1][1]+arr[i].second,dp[i-1][2]);
                }
            }
        }
        cout<<max(dp[n-1][1],dp[n-1][2]);
    }


    return 0;


}
