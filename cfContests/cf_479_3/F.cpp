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
 
void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

int main() {
   init_code();
   int n;
   cin>>n;
   vector<int>arr(n);
   fr(0,n)cin>>arr[i];
   map<int,int>dp;
   int ans = 0;
   int curr = 0;
   fr(0,n){
      dp[arr[i]] = max(dp[arr[i]],dp[arr[i]-1]+1);
      if(dp[arr[i]]>ans){
         ans = dp[arr[i]];
         curr = arr[i];
      }
   }
   vector<int>array;
   for(int i=n-1;i>=0;i--){
      if(arr[i]==curr){
         curr--;
         array.push_back(i);
      }
   }
   reverse(array.begin(),array.end());
   cout<<array.size()<<endl;
   fr(0,array.size())cout<<array[i]+1<<" ";
   cout<<endl; 
   
   return 0;
}

