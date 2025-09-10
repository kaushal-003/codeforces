#include <bits/stdc++.h>
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
    int n;
    cin>>n;
    ll a = n/2;
    if(n%2==0)cout<<(a+1)*(a+1)<<endl;
    else cout<<2*(a+1)*(a+2)<<endl;
}

int main()
{
    int t=1;
    while(t--)
        solve();
    return 0;
}
