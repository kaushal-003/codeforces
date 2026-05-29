#include<bits/stdc++.h>
#include <algorithm>
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

int gcd(int a, int b)
{
    return __gcd(a,b);
}

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>p(n);
        fr(0,n)cin>>p[i];
        int c = 0;
        fr(0,n-1){
            int diff = abs(p[i]-p[i+1]);
            if(gcd(p[i],p[i+1])==diff)c++;
        }
        cout<<c<<endl;
    }


    return 0;


}
