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
    string s;
    cin>>s;
    map<char,int>mpp;
    fr(0,s.size()){
        mpp[s[i]]++;
    }
    ll ans = 0;
    ans = ans + min(n,mpp['A']);
    ans = ans + min(n,mpp['B']);
    ans = ans + min(n,mpp['C']);
    ans = ans + min(n,mpp['D']);
    cout<<ans<<endl;
   }
   return 0;
}
