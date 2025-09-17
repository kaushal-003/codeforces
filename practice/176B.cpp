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



int main() {
    int t=1;
    while (t--) {
       string s1,s2;
       cin>>s1>>s2;
       int k;
       cin>>k;
       ll c =0;
       ll n = s1.size();
       fr(0,s1.size()){
           string temp = s1.substr(i,n)+s1.substr(0,i);
           if(temp==s2) c++;
       }
       if(c==0){
           cout<<0<<endl;
       }
       else{
            vector<vector<ll>>dp(k+1,vector<ll>(2));
            if(s1==s2){
                dp[0][0]=1;
                dp[0][1] = 0;
            }
            else{
                dp[0][0]=0;
                dp[0][1] = 1;
            }
            fr(1,k+1){
                dp[i][0] = (dp[i-1][0]*(c-1) + dp[i-1][1]*(c))%mod;
                dp[i][1] = (dp[i-1][0]*(n-c) + dp[i-1][1]*(n-c-1))%mod;
            }
            cout<<dp[k][0]<<endl;
        }

    }


    return 0;


}
