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
    vector<int>arr(n);
    map<int,int>mpp;
    fr(0,n)cin>>arr[i];
    fr(0,k){
        mpp[arr[i]]++;
    }
    vector<int>ans;
    ans.push_back(mpp.size());
    fr(k,n){
        mpp[arr[i]]++;
        mpp[arr[i-k]]--;
        if(mpp[arr[i-k]]==0)mpp.erase(arr[i-k]);
        ans.push_back(mpp.size());
    }
    int n2 = ans.size();
    fr(0,n2)cout<<ans[i]<<" ";
    return 0;
}
