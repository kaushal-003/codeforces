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

void search(int& n, vector<int>&apples, ll sum, ll& total_sum, int ind,ll& ans){
   if(ind==n){
      ans = min(ans, abs(total_sum-2*sum));
      return;
   }
   search(n,apples,sum+apples[ind],total_sum,ind+1,ans);
   search(n,apples,sum,total_sum,ind+1,ans);
}

int main() {
   // init_code();
   int n;
   cin>>n;
   vector<int>arr(n);
   ll sum = 0;
   fr(0,n){
      cin>>arr[i];
      sum += arr[i];
   }
   ll ans = 1e11;
   search(n,arr,0,sum,0,ans);
   cout<<ans<<endl;
   return 0;
}