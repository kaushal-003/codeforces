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
   string s;
   cin>>s;
   map<char,int>mpp;
   for(auto c:s){
      mpp[c]++;
   }
   int oddC = 0;
   for(auto it:mpp){
      if(it.second%2!=0)oddC++;
   }
   if(oddC>1){
      cout<<"NO SOLUTION"<<endl;
   }
   else{
      string ans = "";
      char c = 'a';
      bool odd = false;
      for(auto it:mpp){
         int freq = it.second;
         char cc = it.first;
         if(freq%2==1){
            c = cc;
            odd = true;
         }
         else{
            freq/=2;
            while(freq){
               ans+=cc;
               freq--;
            }
         }
      }
      string ans2 = ans;
      reverse(ans2.begin(),ans2.end());
      if(odd){
         while(mpp[c]){
            ans+=c;
            mpp[c]--;
         }
      }
      cout<<ans+ans2<<endl;
   }
   return 0;
}