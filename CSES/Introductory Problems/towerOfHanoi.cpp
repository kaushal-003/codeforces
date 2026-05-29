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

void towerOfHanoi(int n,vector<pair<int,int>>&v, int s, int a, int e){
   if(n==1){
      v.push_back({s,e});
      return;
   }
   towerOfHanoi(n-1,v,s,e,a);
   v.push_back({s,e});
   towerOfHanoi(n-1,v,a,s,e);
}

int main() {
   // init_code();
   int n;
   cin>>n;
   vector<pair<int,int>>v;
   towerOfHanoi(n,v,1,2,3);
   cout<<v.size()<<endl;
   for(auto it:v){
      cout<<it.first<<" "<<it.second<<endl;
   }
   return 0;
}