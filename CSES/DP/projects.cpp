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
 

bool cmp(vector<int>a,vector<int>b){
   return a[1]<b[1];
}
int binarySearch(vector<vector<int>>&arr, int i){
   int val = arr[i][0];
   int l = 0;
   int h = i-1;
   int ans = -1;
   while(l<=h){
      int mid = (l+h)/2;
      if(arr[mid][1]<val){
         ans = mid;
         l = mid+1;
      }
      else{
         h = mid-1;
      }
   }
   return ans;
}

ll maxProfit(vector<vector<int>>&arr,int ind,int n,int prevInd){
   
   ll dp[n];
   dp[0]=arr[0][2];
   for(int i=1;i<n;i++){
      int k = binarySearch(arr,i);
      if(k==-1)dp[i]=dp[i-1];
      else dp[i] = max(dp[i-1],(dp[k]+arr[i][2]));
   }
   return dp[n-1];
}

int main() {
   read(n);
   vector<vector<int>>arr(n,vector<int>(3));
   fr(0,n){
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
   }
   sort(arr.begin(),arr.end(),cmp);
   // fr(0,n){
   //      cout<<arr[i][0]<<arr[i][1]<<arr[i][2]<<endl;;
   // }
   cout<<maxProfit(arr,0,n,-1);
}


