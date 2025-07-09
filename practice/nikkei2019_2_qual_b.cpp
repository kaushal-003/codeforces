#include<bits/stdc++.h>
#include <future>
#include <ios>
#include <memory>
#define ll long long
#define pb push_back
#define mod2 998244353
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

ll pow (ll a, ll b){
    ll res = 1;
    while(b>0){
        if(b&1){
            res = (res*a)%mod2;
        }
        a = (a*a)%mod2;
        b>>=1;
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    vector<ll>freq(n);
    fr(0,n){
        cin>>arr[i];
        freq[arr[i]]++;
    }
    if(arr[0]!=0 || freq[0]!=1){
        cout<<0<<endl;
        return 0;
    }
    ll ans = 1;
    fr(1,n){
        if(freq[i]>0){
            ans = (ans*(pow(freq[i-1],freq[i])%mod2))%mod2;
        }
    }
    cout<<ans<<endl;
}
