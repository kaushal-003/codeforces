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
#define read(x) ll x; cin >> x // changed to read long long

using namespace std;

ll get_ele(ll& a, ll&b, ll&c, ll&x ){
    return ((x*a)+b)%c;
}

int main() {
    int n,k;
    cin>>n>>k;
    queue<ll>q;
    ll a,b,c,x;
    cin>>x>>a>>b>>c;
    q.push(x);
    ll ans = q.front();
    ll xrr = q.front();
    ll last = q.front();
    fr(1,k){
        last =  get_ele(a,b,c,last);
        q.push(last);
        xrr^=last;
    }
    ans = xrr;
    // cout<<xrr<<endl;
    fr(k,n){
        // cout<<xrr<<" "<<ans<<" "<<last<<" "<<q.front()<<endl; 
        last = get_ele(a,b,c,last);
        xrr ^= q.front();
        xrr ^= last;
        ans = ans ^ xrr;
        q.pop();
        q.push(last);
    }
    cout<<ans<<endl;
    return 0;
}
