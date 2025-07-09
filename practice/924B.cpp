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
#define prDouble(x) cout << fixed << setprecision(20) << x
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
    vector<double>v(n);
    fr(0,n){
        cin>>v[i];
    }
    ll i = 0;
    ll j = 0;
    double ans = -1.0;
    while(i<n){
        while(j<n && v[j]-v[i]<=d){
            j++;
        }
        if(j-1>0 && j-i>=3)ans = max(ans,(v[j-1]-v[i+1])/(v[j-1]-v[i]));
        i++;
    }
    prDouble(ans);
    return 0;
}
