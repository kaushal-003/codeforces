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
        int n;
        cin>>n;
        int arr[100005];
        ll prod = 1;
        fr(1,n){
            if(gcd(n,i)==1){
                prod = (prod*i)%n;
                arr[i] = 1;
            }
            else{
                arr[i] = 0;
            }
        }
        if(prod!=1)arr[prod] = 0;
        int count = 0;
        fr(1,n){
            if(arr[i]==1)count++;
        }
        cout<<count<<endl;
        fr(1,n){
            if(arr[i]==1)cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;


}
