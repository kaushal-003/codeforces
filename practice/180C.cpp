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

int dp[100005][2];
int helper(string& s, int ind,int small,int &n){
    if(ind==n)return 0;
    if(dp[ind][small]!=-1)return dp[ind][small];
    if (small==1){
       if(s[ind]>='a' && s[ind]<='z'){
           int notchange =helper(s,ind+1,1,n);
           return dp[ind][small] = notchange;
       }
       int change = 1+helper(s,ind+1,1,n);
       return dp[ind][small] = change;
   }
   if(s[ind]>='a' && s[ind]<='z'){
       int change = 1+ helper(s,ind+1,0,n);
       int notchange =helper(s,ind+1,1,n);
       return dp[ind][small] = min(change,notchange);
   }
   int change = 1+helper(s,ind+1,1,n);
   int notchange =helper(s,ind+1,0,n);
   return dp[ind][small] = min(change,notchange);
}

int main() {
    int t=1;
    while (t--) {
        string s;
        cin>>s;
        int n = s.size();
        fr(0,100005){
            rep(j,0,2){
                dp[i][j] = -1;
            }
        }
        int ans = helper(s,0,0,n);
        cout<<ans<<endl;
    }


    return 0;


}
