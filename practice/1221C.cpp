#include<bits/stdc++.h>
#include <ios>
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
    cin>>t;
    while (t--) {
        int a,b,c;
        cin>>a>>b>>c;
        int l = 0;
        int r = max({a,b,c});
        int ans = 0;
        while(l<=r){
            int mid = (l+r)/2;
            if(a<mid || b<mid){
                r = mid-1;
            }
            else{
                int third = c + a +b - 2*mid;
                if(third<mid){
                    r = mid-1;
                }
                else{
                    ans = max(ans,mid);
                    l = mid+1;

                }

            }
        }
        cout<<ans<<endl;
    }

    return 0;


}
