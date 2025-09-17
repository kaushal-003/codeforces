#include <algorithm>
#include<bits/stdc++.h>
#include <climits>
#include <cstring>
#include <sys/types.h>
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

vector<int>nums;
int ispalindrome(int n){
    string s = to_string(n);
    int i = 0, j = s.size() - 1;
    while(i < j){
        if(s[i] != s[j])return 0;
        i++;
        j--;
    }
    return 1;
}
void precompute(){
    fr(1,40001){
        if(ispalindrome(i))nums.pb(i);
    }
}

int dp[40001];

void cal(){

}
int main() {
    // init_code();
    int t;
    cin>>t;
    memset(dp, 0, sizeof(dp));
    precompute();
    for(auto x:nums){
        dp[x] = 1;
    }
    cal();
    while (t--) {
        int n;
        cin>>n;
        cout<<dp[n]<<endl;
    }


    return 0;


}
