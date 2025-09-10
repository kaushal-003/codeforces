#include <bits/stdc++.h>
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
#define fast_io                       \ 
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define read(x) \
    int x;      \
    cin >> x
using namespace std;


int main()
{
    read(n);
    ll dp[n+1];
    if(n%2==1) cout<<0<<endl;
    else{
        dp[0]=1;
        dp[1]=0;
        for(int i=2;i<=n;i++){
            dp[i] = 2*dp[i-2];
        }
        cout<< dp[n]<<endl;;
    }
    
}
