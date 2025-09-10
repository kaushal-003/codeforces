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

int dp[1000001][3];
ll counting_towers(int n,int ind, int prev)
{

    if(ind==n) return 1;
    if(prev ==-1) return (counting_towers(n,ind+1,1)+counting_towers(n,ind+1,2))%mod;
    else{
        // cout<<dp[ind][prev]<<endl;

        if(dp[ind][prev]!=-1) {
            return dp[ind][prev];
        }
        if(prev==2){
            return dp[ind][prev]=(counting_towers(n,ind+1,1)+2*counting_towers(n,ind+1,2))%mod;
        }
        else{
            return dp[ind][prev]=(4*counting_towers(n,ind+1,1)+counting_towers(n,ind+1,2))%mod;
        }
    }
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {   
        memset(dp, -1, sizeof(dp));
        int n;
        cin >> n;
        cout << counting_towers(n,0,-1) << endl;
    }
}
