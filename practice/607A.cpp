#include <algorithm>
#include<bits/stdc++.h>
#include <vector>
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
    // init_code();
    int t;
    t = 1;
    while (t--) {
        int n;
        cin>>n;
        vector<vector<int>>arr(n,vector<int>(2));
        fr(0,n){
            cin>>arr[i][0]>>arr[i][1];
        }
        sort(arr.begin(),arr.end());
        vector<int>a,b;
        for(auto &it:arr){
            a.push_back(it[0]);
            b.push_back(it[1]);
        }
        vector<int>dp(n);
        dp[0] = 0;
        fr(1,n){
            auto it = lower_bound(a.begin(),a.end(),a[i]-b[i]);
            if(it!=a.begin()){
                it--;
                int ind = it - a.begin();
                dp[i] = dp[ind] + (i-ind-1);
            }
            else{
                dp[i] = i;
            }
        }
        int mn = INT_MAX;
        int ind = -1;
        fr(0,n){
            if(dp[i] + (n-i-1)<mn){
                mn = dp[i] + (n-i-1);
                ind = i;
            }
        }
        cout<<mn<<endl;
    }

    return 0;


}
