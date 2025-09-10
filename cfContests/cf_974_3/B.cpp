#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(ll i = a; i < b; i++)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) ll x; cin >> x

using namespace std;

void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

int main(){
    init_code();
    read(t);
    while(t--){
        ll n,q;
        cin>>n>>q;
        vector<ll>arr(n);
        fr(0,n)cin>>arr[i];
        ll curr = 0;
        map<ll,ll>mpp;
        fr(0,n-1){
            ll a = arr[i];
            ll b = arr[i+1];
            ll d = b-a-1;
            if(d>0){
                ll k = (i+1)*(n-i-1);
                mpp[k]+=d;
            }
            ll k2 = i*(n-i)+(n-i-1);
            mpp[k2]++;
        }
        ll k3 = n-1;
        mpp[k3]++;
        while(q--){
            ll a;
            cin>>a;
            if(mpp.find(a)!=mpp.end())cout<<mpp[a]<<" ";
            else cout<<0<<" ";
        }
        cout<<endl;
    }
    return 0;
}