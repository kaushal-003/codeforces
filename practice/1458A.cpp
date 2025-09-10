#include <bits/stdc++.h>
#include <csignal>
#define ll long long
#define pb push_back
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL << 60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll, pair<ll, ll>>
#define goog(tno) cout << "Case #" << tno << ": "
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define read(x) ll x; cin >> x
using namespace std;

void solve(){
    ll n,m;
    cin>>n>>m;
    vector<ll>a(n),b(m);
    fr(0,n)cin>>a[i];
    fr(0,n)cin>>b[i];
    ll gcdAns = -1;
    fr(1,n){
       if(gcdAns!=-1) gcdAns = __gcd(gcdAns,(a[i]-a[0]));
       else gcdAns = (a[i]-a[i-1]);
    }
    fr(0,m){
        if(gcdAns!=-1)cout<<abs(__gcd(a[0]+b[i],gcdAns))<<" ";
        else cout<<abs(a[0]+b[i])<<" ";
    }
}

int main()
{
    int t=1;
    while(t--)
        solve();
    return 0;
}
