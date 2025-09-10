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


void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    string t; cin >> t;
    vector<int> cnt(26, 0);

    bool ok = true;
    for (int i = 0; i < n; ++i) {
        if (i >= k || i+k < n){
            cnt[s[i] - 'a']++;
            cnt[t[i] - 'a']--;
        } else {
            ok &= s[i] == t[i];
        }
    }

    cout << (ok && count(all(cnt), 0) == 26 ? "YES" : "NO") << '\n';
}


int main()
{
    int t;cin>>t;
    while(t--)
        solve();
    return 0;
}
