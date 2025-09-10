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
#define read(x) ll x; cin >> x

using namespace std;

void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}



int main(){
    init_code();
    read(t);
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<vector<ll>>arr(n,vector<ll>(2));
        vector<vector<ll>>arr2(n-1,vector<ll>(2));

        fr(0,n)cin>>arr[i][0];
        fr(0,n)cin>>arr[i][1];
                // cout<<"HI"<<endl;

        sort(arr.begin(),arr.end());
        vector<ll>dp(n);
        fr(0,n){
            ll k = (arr[i][1])?arr[i][0]+k:arr[i][0];
            if(i==0)dp[i]=k;
            else dp[i] = max(dp[i-1],k);
        }
        \ 
        
    
    }
    return 0;
}
