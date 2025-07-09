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
    int n;
    ll s;
    cin>>n>>s;
    vector<ll>v(n);
    ll sum2 = 0;
    fr(0,n){
        cin>>v[i];
        sum2+=v[i];
    }
    ll a1 = 0;
    while(s>=sum2){
        a1++;
        s-=sum2;
    }
    ll ans = n+1;
    ll sum = 0;
    ll j = 0;
    ll si = 0;
    vector<ll>v2(2*n);
    fr(0,2*n){
        if(i<n){
            v2[i] = v[i];
        }
        else{
            v2[i] = v[i-n];
        }
    }
    fr(0,2*n){
        sum+=v2[i];
        while(j<n && sum-v2[j]>=s){
            sum-=v2[j];
            j++;
        }
        // cout<<j<<" "<<i<<" "<<sum<<endl;
        if(sum>=s && j<n){
            if(ans>i-j+1){
                ans = i-j+1;
                si = j;
            }
        }

    }
    cout<<si+1<<" "<<ans+n*a1<<endl;
}
