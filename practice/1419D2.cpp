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

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    fr(0,n)cin>>arr[i];
    sort(all(arr));
    vector<int>ans(n);
    int ind = 0;
    for(int i = 1;i<n;i+=2){
        ans[i] = arr[ind];
        ind++;
    }
    for(int i = 0;i<n;i+=2){
        ans[i] = arr[ind];
        ind++;
    }
    //now search on sliding window
    int count = 0;
    fr(2,n){
        if(ans[i-2]>ans[i-1] && ans[i]>ans[i-1])count++;
    }
    cout<<count<<endl;
    fr(0,n)cout<<ans[i]<<" ";
    cout<<endl;
}

int main()
{
    int t=1;
    while(t--)
        solve();
    return 0;
}
