#include<bits/stdc++.h>
#include <climits>
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



int main(){
    int t;
    t = 1;
    while (t--) {
        ll n;
        cin>>n;
        ll k;
        cin>>k;
        ll ans = 1;
        fr(0,n){
            if(ans<INT_MAX){
                if(i!=0)ans = ans*(k-1);
                else ans = ans*k;
            }
            else{
                ans = INT_MAX;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
