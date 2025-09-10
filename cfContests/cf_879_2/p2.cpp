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
   init_code();
   int t;
   cin >> t;
   while (t--) {
        string l,r;
        cin>>l>>r;
      
        int k=0;
        int ld=0;
         vector<int>v1;
        vector<int>v2;
        for(int i=l.size()-1;i>=0;i--){
         int temp=int(l[i])-48;
         v1.push_back(temp);
        }
        for(int i=r.size()-1;i>=0;i--){
         int temp=int(r[i])-48;
         v2.push_back(temp);
        }
        if(v2.size()>v1.size()){
         while(v2.size()>v1.size()){
            v1.push_back(0);
         }
        }
        int k1=v2.size();

        int ind=0;
        int diff=0;
        for(int i=k1-1;i>=0;i--){
            if(v1[i]!=v2[i]){
               diff=abs(v1[i]-v2[i]);
               ind=i;
               break;
            }
        }
        cout<<diff+9*(ind)<<endl;
   }
   return 0;

}


