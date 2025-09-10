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
 

int longestIncSubSeq(vector<int>&arr,int n){
    //O(N^logN) solution with DP
    map<int,int>mpp;
    int dp[n+1];
    for(int i=0;i<n;i++){
        dp[i] = 1;
        
            auto it = mpp.lower_bound(arr[i]);
            if(it==mpp.begin()){
                mpp[arr[i]]=1;
                continue;
            }
            it--;
            dp[i] = 1+ it->second;
            mpp[arr[i]]=max(mpp[arr[i]],dp[i]);
            it = mpp.find(arr[i]);
            it++;
            while(it!=mpp.end() && it->second<=dp[i]){
                auto temp = it;
                it++;
                mpp.erase(it);
            }
        
    }
    dp[n]= 0;
    fr(0,n){
        dp[n] = max(dp[n],dp[i]);
    }
    return dp[n];
}

// int longestIncSubSeq(vector<int>&arr,int n){
//     //O(N^2) solution with DP
//     int dp[n+1];
//     for(int i=0;i<n;i++){
//         dp[i] = 1;
//         rep(j,0,i){
//             if(arr[j]<arr[i]){
//                 dp[i] = max(dp[i],1+dp[j]);
//             }
//         }
//     }
//     dp[n]= 0;
//     fr(0,n){
//         dp[n] = max(dp[n],dp[i]);
//     }
//     return dp[n];
// }
int main() {
   read(n);
   vector<int>arr(n);
   fr(0,n)cin>>arr[i];
    cout<<longestIncSubSeq(arr,n);
}


