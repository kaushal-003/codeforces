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
    int t;
    cin>>t;
    while (t--) {
       int n;
      cin>>n;
     vector<int>arr(n);
     fr(0,n)cin>>arr[i];
     if(n==2){
         if(arr[0]==1)cout<<2<<" "<<1<<endl;
         else cout<<1<<" "<<2<<endl;
     }
     else{

        fr(0,n){
            cout<<((n-arr[i])?(n-arr[i]):n)    <<" ";
        }
        cout<<endl;
     }
    }


    return 0;


}
