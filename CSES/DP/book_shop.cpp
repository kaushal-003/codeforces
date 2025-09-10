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


int max_pages(int n,int x,vector<int>&price,vector<int>&pages){
    vector<vector<int>>dp(n,vector<int>(x+1,0));
    fr(0,n){
        rep(j,0,x+1){
            if(i>0)dp[i][j] =max(dp[i-1][j],(j-price[i]>=0)? pages[i]+dp[i-1][j-price[i]] : 0);
            else dp[i][j]= (j>=price[0])? pages[0]:0;

        }
    }
    return dp[n-1][x];
}

int main()
{
    read(n);
    read(x);
    vector<int>price(n);
    vector<int>pages(n);
    fr(0,n) cin>>price[i];
    fr(0,n) cin>>pages[i];
    cout<<max_pages(n,x,price,pages)<<endl;
}
