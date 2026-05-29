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

void search(int& n,string str,vector<string>&visited,set<string>&s){
   for(int i = 0;i<n;i++){
      string s2 = str;
      s2[i] = (str[i]=='0')?'1':'0';
      if(s.find(s2)==s.end()){
         s.insert(s2);
         visited.push_back(s2);
         search(n,s2,visited,s);
         break;
      }
   }
}

int main() {
   // init_code();
   int n;
   cin>>n;
   string str="";
   fr(0,n)str+='0';
   set<string>s;
   vector<string>visited;
   visited.push_back(str);
   s.insert(str);
   search(n,str,visited,s);
   for(auto ss:visited){
      cout<<ss<<endl;
   }
   return 0;
}