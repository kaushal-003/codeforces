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
    // init_code();
    int t;
    t = 1;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        fr(0,n)cin>>arr[i];
        ll rangeSum = 0;
        for(int i = 0;i<k;i++){
            rangeSum += arr[i];
        }
        ll sum = rangeSum;
        for(int i = k;i<n;i++){
            rangeSum += arr[i]-arr[i-k];
            sum += rangeSum;
        }
        double ans = sum*(1.0)/((n-k+1)*(1.0));
        prDouble(ans);
    }

    return 0;


}
