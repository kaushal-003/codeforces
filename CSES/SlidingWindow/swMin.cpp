#include <bits/stdc++.h>
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
#define read(x) ll x; cin >> x // changed to read long long

using namespace std;

ll get_ele(ll& a, ll&b, ll&c, ll&x ){
    return ((x*a)+b)%c;
}

int main() {
    int n,k;
    cin>>n>>k;
    deque<pair<ll,ll>>q;
    ll a,b,c,x;
    cin>>x>>a>>b>>c;
    q.push_back({x,0});
    ll ans = q.front().first;
    ll mn = q.front().first;
    ll last = q.front().first;
    fr(1,k){
        last =  get_ele(a,b,c,last);
        while(!q.empty() && last<=q.back().first){
            q.pop_back();
        }
        q.push_back({last,i});
        ans=q.front().first;
    }
    // cout<<sum<<endl;
    fr(k,n){
        if(q.front().second<i-(k-1)){
            q.pop_front();
        }
        last = get_ele(a,b,c,last);
        while(!q.empty() && last<=q.back().first){
            q.pop_back();
        }
        q.push_back({last,i});
        mn = q.front().first;
        ans = ans ^ mn;
        // cout<<mn<<" "<<ans<<" "<<last<<" "<<q.front().first<<endl;

    }
    cout<<ans<<endl;
    return 0;
}
