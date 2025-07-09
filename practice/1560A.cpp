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
    cin>>t;
    while (t--) {
        int k;
        cin>>k;
        int ans = 1;
        fr(0,2001){
            if(i%3!=0 && i%10!=3){
                ans = i;
                k--;
                if(k==0)break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;


}
