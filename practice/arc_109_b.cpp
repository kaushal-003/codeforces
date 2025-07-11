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

ll bs(ll n){
    ll low = 0;
    ll high = 1e10+200;
    ll ans = 0;
    while(low<=high){
        ll mid = (low)+((high-low)/2);
        ll a = (mid*(mid+1))/2;
        if (a>n){
            high = mid-1;
        }
        else{
            ans = mid;
            low = mid+1;
        }
    }
    return ans;
}

int main(){
    int t;
    t = 1;
    while (t--) {
        ll n;
        cin>>n;
        ll ans = bs(n+1);
        cout<< n-ans+1<< endl;
    }

    return 0;
}
