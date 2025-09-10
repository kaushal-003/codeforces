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
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

 
// Ordered Set Tree
typedef tree<int, null_type, less<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_set;
 

ordered_set set1;
// Function that returns the lower bound
// of the element
int lower_bound(int x)
{
    // Finding the position of the element
    int pos = set1.order_of_key(x);
 
    
 
        return pos;
    
}
 
// Function that returns the upper bound
// of the element
   void init_code() {
       fast_io;
       #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
       #endif 
   }


   int main() {

      init_code();

      int t;
      cin >> t;

      while (t--) {
         read(n);
         vector<vector<int>>arr(n,vector<int>(2));
         fr(0,n){
            cin>>arr[i][0];
            cin>>arr[i][1];
         }
         sort(arr.begin(),arr.end());
         ll c=0;
         set1.insert(arr[0][1]);
         for(int i=1;i<n;i++){
            int k=lower_bound(arr[i][0]);
            c+=i-k;
            set1.insert(arr[i][1]);
         }
         cout<<c<<endl;

      }
      
      return 0;
         
         
   }




