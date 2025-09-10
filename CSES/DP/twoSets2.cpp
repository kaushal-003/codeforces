#include<bits/stdc++.h>
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
 

ll subsetSumK(vector<int>&arr,int n){
    ll sum = ((n)*(n+1))/2;
    if(sum%2==1) return 0;
    sum /=2;
    ll dp[n][sum+1];
    fr(0,n)dp[i][0]=1;
    fr(0,n){
        rep(j,1,sum+1){
            if(i==0){
                dp[i][j]=(arr[i]==j)?1:0;
            }
            else{
            dp[i][j] = (arr[i]<=j)?((dp[i-1][j]+dp[i-1][j-arr[i]])%mod):dp[i-1][j];
            }
        }
    }
    return dp[n-1][sum];
}

int main() {
   read(n);
   vector<int>arr(n);
   fr(0,n)arr[i]=i+1;
   cout<<(subsetSumK(arr,n)*500000004)%mod;
}


