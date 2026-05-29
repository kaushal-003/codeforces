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

void search(string&s , int&n, string s2, vector<bool>&v, set<string>&ans){
   if(s2.size()==n){
      ans.insert(s2);
   }
   for(int i =0;i<n;i++){
      if(v[i])continue;
      v[i] = true;
      search(s,n,s2+s[i],v,ans);
      v[i] = false;
   }
}

int main() {
   // init_code();
   string a;
   cin>>a;
   int n = a.size();
   set<string>ans;
   string s = "";
   vector<bool>v(n,false);
   search(a,n,s,v,ans);
   cout<<ans.size()<<endl;
   for(auto st:ans){
      cout<<st<<endl;
   }
   return 0;
}