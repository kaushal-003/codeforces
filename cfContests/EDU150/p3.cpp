
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define rep(i, a, b) for (int i = a; i < b; i++)
#define inf (1LL << 60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll, pair<ll, ll>>
#define goog(tno) cout << "Case #" << tno << ": "
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

void init_code()
{
    fast_io;   
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}



int main()
{
    init_code();
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    ll sum=0;
    for(int i=0;i<n;i++){
      sum+=arr[i];
    }
    ll m=1e14;
    for(int i=0;i<n;i++){
      m=min(m,abs(sum-(arr[i]*n)));
    }
    cout<<m<<endl;
    return 0;
}
