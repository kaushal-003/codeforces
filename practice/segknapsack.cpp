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
    vector<ll>w(n);
    fr(0,n)cin>>w[i];
    vector<ll>c(n);
    fr(0,n)cin>>c[i];
    int l = 0;
    ll totalW = 0;
    ll totalC = 0;
    ll ans = 0;
    rep(r,0,n){
        totalW += w[r];
        totalC += c[r];
        while(totalW>s){
            totalW-=w[l];
            totalC-=c[l];
            l++;
        }
        ans = max(ans,totalC);
    }
    cout<<ans<<endl;

}
