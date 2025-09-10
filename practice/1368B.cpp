#include <bits/stdc++.h>
#include <csignal>
#define ll long long
#define pb push_back
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL << 60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll, pair<ll, ll>>
#define goog(tno) cout << "Case #" << tno << ": "
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define read(x) ll x; cin >> x
using namespace std;

ll find_bound(ll n){
    fr(1,35){
        if(n<=pow(i,10)){
            return i;
        }
    }
    return -1;
}

void solve(){
    ll n;
    cin>>n;
    ll k = n;
    ll re = find_bound(n);
    vector<char>v = {'c','o','d','e','f','o','r','c','e','s'};
    fr(0,10){
        if(n>=re){
            rep(j,0,re){
                cout<<v[i];
            }
            n-=re;
        }
        else{
            if(n>0){
                rep(j,0,n){
                    cout<<v[i];
                }
                n = 0;
            }
            else{
                cout<<v[i];
            }
        }
    }
    if(k%2==1 && k!=1)cout<<v[9];
    cout<<endl;
}

int main()
{
    int t=1;
    while(t--)
        solve();
    return 0;
}
