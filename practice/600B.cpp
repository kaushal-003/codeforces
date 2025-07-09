#include <algorithm>
#include<bits/stdc++.h>
#include <iostream>
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
#define read(x) int x; cin >> x
using namespace std;

void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

bool bs(ll n){
    ll low = 1;
    ll high = 1e4;
    bool b = false;
    while(low<=high){
        ll mid = (low+high)/2;
        ll k = mid*mid*mid;
        if(k==n){
            b = true;
            break;
        }
        else if(k>n){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return b;
}

int main() {
    int t;
    t = 1;
    while (t--) {
       ll n,m;
       cin>>n>>m;
       vector<ll>a(n),b(m);
       fr(0,n)cin>>a[i];
       fr(0,m)cin>>b[i];
       sort(all(a));
       fr(0,m){
           cout<<upper_bound(a.begin(),a.end(),b[i])-a.begin()<<" ";
       }
       cout<<endl;
    }


    return 0;


}
