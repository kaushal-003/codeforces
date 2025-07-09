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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<ll>s(3,0);
        ll count = 0;
        while(s[0] < n){
            ll a = s[0];
            s[0] = s[1];
            s[1] = s[2];
            s[2] = 2*s[0]+1;
            count++;
        }
        cout<<count<<endl;
    }

    return 0;


}
