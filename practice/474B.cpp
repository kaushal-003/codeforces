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
    int t=1;
    while (t--) {
       int n;
       cin>>n;
       vector<ll>arr(n);
       fr(0,n)cin>>arr[i];
       fr(1,n)arr[i] = arr[i-1]+arr[i];
       int m;
       cin>>m;
       while(m--){
           int q;
           cin>>q;
           int a = lower_bound(arr.begin(),arr.end(),q)-arr.begin();
           cout<<a+1<<endl;
       }
    }


    return 0;


}
