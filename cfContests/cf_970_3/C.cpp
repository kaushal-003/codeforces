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


ll calculate(ll p,ll q) { 
    ll mod1 = 1000000007, expo; 
    expo = mod1 - 2; 
    while (expo) { 
        if (expo & 1) { 
            p = (p * q) % mod1; 
        } 
        q = (q * q) % mod1; 
        expo >>= 1; 
    } 
    return p; 
}

int main(){
    init_code();
    read(t);
    while(t--){
        ll n;
        cin>>n;
        vector<ll>arr(n);
        fr(0,n)cin>>arr[i];
        vector<ll>suffix(n+1,0);
        for(int i=n-2;i>=0;i--){
            suffix[i] = (suffix[i+1]+arr[i+1])%mod;
        }
        ll expected = 0;
        fr(0,n){
            ll ans = (arr[i]*(suffix[i]))%mod;
            expected=(expected+ans)%mod;
        }
        ll size = ((n*(n-1))/2)%mod;
        cout<<calculate(expected,size)<<endl;
    }
    return 0;
}