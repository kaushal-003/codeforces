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
   // init_code();
   ll n;
   cin>>n;
   set<int>s,s2;
   ll possible = (n*(n+1))/2;
   if(possible%2==1){
      cout<<"NO"<<endl;
   }
   else{
      ll k = possible/2;
      fr(1,n+1)s.insert(i);
      while(k!=0){
         int last = *--s.end();
         if(k>last){
            k-=last;
            s.erase(last);
            s2.insert(last);
         }
         else{
            if(s.find(k)!=s.end()){
               s.erase(k);
               s2.insert(k);
               k=0;
            }
         }
      }
      cout<<"YES"<<endl;
      cout<<s.size()<<endl;
      for(auto it:s){
         cout<<it<<" ";
      }
      cout<<endl;
      cout<<s2.size()<<endl;
      for(auto it:s2){
         cout<<it<<" ";
      }
      cout<<endl;
   }
   return 0;
        
        

}