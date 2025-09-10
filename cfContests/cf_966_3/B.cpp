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
     int n;
     cin>>n;
     vector<int>arr(n);
     fr(0,n)cin>>arr[i];
     vector<int>dp(n+1,0);
     dp[arr[0]]=1;
     bool b = true;
     fr(1,n){
        int a = arr[i];
        if(a==1 && dp[2]==0){
            b = false;
            break;
        }
        else if(a==n && dp[n-1]==0){
            b = false;
            break;
        }
        else if(dp[a+1]==0 && dp[a-1]==0){
             b = false;
            break;
        }
        dp[a]=1;
     }
     if(b)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
    }
    return 0;
}
