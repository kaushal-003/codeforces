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
        ll n;cin>>n;
        vector<ll>arr(n);
        fr(0,n){
            cin>>arr[i];
        }
        ll i = 0;
        ll ans = 1e18;
        while(i<n){
            ll temp = arr[i]*(i);
            while(i<n-1 && arr[i]==arr[i+1]){
                i++;
            }
            temp+=(n-i-1)*arr[i];
            i++;
            ans = min(ans,temp);
        }
        cout<<ans<<endl;
    }

    return 0;


}
