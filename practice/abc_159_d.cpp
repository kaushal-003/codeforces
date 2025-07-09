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


int main(){
    int t;
    t = 1;
    while (t--) {
        ll n;
        cin>>n;
        map<ll,ll>mp;
        vector<ll>arr(n);
        fr(0,n){
            int x;
            cin>>x;
            mp[x]++;
            arr[i] = x;
        }
        ll ans = 0;
        for(auto it:mp){
            ans += (it.second*(it.second-1))/2;
        }
        for(auto n:arr){
            ll k = mp[n];
            ans -= (k*(k-1))/2;
            ans += ((k-1)*(k-2))/2;
            cout<<ans<<endl;
            ans += (k*(k-1))/2;
            ans -= ((k-1)*(k-2))/2;
        }
    }

    return 0;
}
