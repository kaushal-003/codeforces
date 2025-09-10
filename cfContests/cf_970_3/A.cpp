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

vector<ll> func(ll a){
    vector<ll>ans;
    ll k = 0;
    ll diff = 1;
    while(k+diff<=a){
        ans.push_back(k);
        k = k+diff;
        diff++;
    }
    ans.push_back(k+diff);
    return ans;
}

int main(){
    init_code();
    vector<ll>ans = func(1e10);
    read(t);
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll k = upper_bound(ans.begin(),ans.end(),b-a)-ans.begin();
        cout<<k<<endl;
    }
    return 0;
}