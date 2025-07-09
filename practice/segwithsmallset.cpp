#include<bits/stdc++.h>
#include <iterator>
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
    ll n;
    ll s;
    cin>>n>>s;
    vector<ll>v(n);
    fr(0,n)cin>>v[i];
    ll l = 0;
    map<ll,ll>st;
    ll ans = 0;
    rep(r,0,n){

        st[v[r]]++;
       while(l<n && st.size()>s){
           st[v[l]]--;
           if(st[v[l]]==0)st.erase(v[l]);
           l++;
       }
       // cout<<l<<" "<<r-l+1<<" "<<st.size()<<endl;
       ans += r-l+1;

    }
    cout<<ans<<endl;

}
