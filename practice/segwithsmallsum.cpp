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


int main() {
    ll n;
    ll s;
    cin>>n>>s;
    s = s-1;
    vector<ll>v(n);
    fr(0,n)cin>>v[i];
    ll l = 0;
    ll sum = 0;
    ll ans = 0;
    rep(r,0,n){
        sum+=v[r];
        while(sum>s){
            sum-=v[l];
            l++;
        }
        ans = ans+r-l+1;
    }
    cout<<((n*(n+1))/2)-ans<<endl;

}
