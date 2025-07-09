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

bool comp(pair<ll,ll> a, pair<ll,ll> b){
    return a.first<b.first;
}


int main() {
    ll n,d;
    cin>>n>>d;
    vector<pair<ll,ll>>v(n);
    fr(0,n){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end(),comp);
    ll i=0,j=0;
    ll ans = 0;
    ll frnd = 0;
    while(i<n && j<n){
        if(v[i].first-v[j].first<d){
            frnd+=v[i].second;
            i++;
        }
        else{
            frnd-=v[j].second;
            j++;
        }
        ans = max(ans,frnd);
    }
    cout<<ans<<endl;
    return 0;
}
