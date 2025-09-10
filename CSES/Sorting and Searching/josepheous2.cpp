#include <bits/stdc++.h>
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
#define read(x) ll x; cin >> x // changed to read long long

using namespace std;

void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}


ll max_manhatten_val(ll n){
   if(n%2==0){
      return 2*(n/2)*(n/2);
   }
   else{
      return 2*(n/2)*((n/2)+1);
   }
}


ll binarySearch(ll low, ll high, ll x)
{
    while (low <= high) {
        ll mid = low + (high - low) / 2;

        // Check if x is present at mid
        if (max_manhatten_val(mid) == x)
            return mid;

        // If x greater, ignore left half
        if (max_manhatten_val(mid) < x)
            low = mid + 1;

        // If x is smaller, ignore right half
        else
            high = mid - 1;
    }

    // If we reach here, then element was not present
    return -1;
}

int upper_bound(vector<int>&tickets,vector<int>&arr,int k){
   int low =0;
   int high = tickets.size()-1;
   int ans =0;
   while(low<=high){
      int mid = (low+high)/2;
      if(tickets[mid]<=k){
         ans = mid;
         low=mid+1;
      }
      else{
         high = mid-1;
      }
   }
   while(ans >=0 && arr[ans]==1){
      ans--;
   }
   return ans;
}


void josephus(int n, int k) {
    int res = 0;
    for (int i = 1; i <= n; ++i){
      res = (res + k) % i;
      cout<<res<<" ";
    }
}


int main() {
   read(n);
   josephus(n,2);
   return 0;
   }
