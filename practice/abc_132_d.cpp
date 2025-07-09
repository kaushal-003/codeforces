#include<bits/stdc++.h>
#include <ios>
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


ll factorial[100005];

// Function to calculate factorial
// of all numbers
void StoreFactorials(int n)
{
    factorial[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial[i] =
          (i * factorial[i - 1])
            % mod;

    }
}

// Calculate x to the power y
// in O(log n) time
int Power(int x, int y)
{
    int ans = 1;
    while (y > 0) {
        if (y % 2 == 1) {
            ans = (ans * x) % mod;
        }
        x = (x * x) % mod;
        y /= 2;
    }
    return ans;
}

// Function to find inverse mod of
// a number x
int invmod(int x)
{
    return Power(x, mod - 2);
}

// Calculate (n C r)
int nCr(int n, int r)
{
    return (factorial[n]
            * invmod((factorial[r]
            * factorial[n - r]) % mod))
            % mod;
}

int CountWays(int n,int k)
{
    // Loop to compute the formula
    // evaluated
    int ans = 0;
    for (int i = k; i >= 0; i--)
    {
        if (i % 2 == k % 2)
        {
            // Add even power terms
            ans = (ans + (Power(i, n)
                  * nCr(k, i)) % mod)
                  % mod;
        }
        else
        {
            // Subtract odd power terms
            ans = (ans + mod - (Power(i, n)
                  * nCr(k, i)) % mod) % mod;
        }
    }

    // Choose the k boxes which
    // were used
    ans = (ans * nCr(n, k)) % mod;

    return ans;
}




ll bs(ll n){
    ll low = 0;
    ll high = 1e10+200;
    ll ans = 0;
    while(low<=high){
        ll mid = (low)+((high-low)/2);
        ll a = (mid*(mid+1))/2;
        if (a>n){
            high = mid-1;
        }
        else{
            ans = mid;
            low = mid+1;
        }
    }
    return ans;
}

int main(){
    int t;
    t = 1;
    while (t--) {
        ll n,k;
        cin>>n>>k;
        StoreFactorials(n);
        cout<<nCr(n-k+1,1)<<endl;
        fr(1,k+1){
        cout<<(nCr(n-k+i,i)*nCr(k-1,i-1))%mod<<endl;
        }
    }

    return 0;
}
