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
#define mod2 998244353
using namespace std;

void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

ll binExp(ll a, ll b){
    ll temp = 1;
    while(b>0){
        if(b & 1) temp = (temp * a)%mod2;
        a = (a*a)%mod2;
        b>>=1;
    }
    return temp;
}

ll inv(ll a){
    ll ans = binExp(a,mod2-2)%mod2;
    return ans;
}

map<ll,ll>mpp;
ll n;
ll f(int a){
    if(a>n)return 0;
    if(a==n)return 1;
    if(mpp.find(a)!=mpp.end())return mpp[a];
    ll ans = 0;
    fr(2,7){
        ans = (ans + f(a*i) * inv(5))%mod2;
    }
    return mpp[a]=ans%mod2;
}

int main() {
    int t=1;
    while (t--) {
        cin>>n;
        cout<<f(1)<<endl;


    }


    return 0;


}
