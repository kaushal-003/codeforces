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
       int a1,a2,b1,b2,c1,c2;
       cin>>a1>>a2;
       cin>>b1>>b2;
       cin>>c2>>c2;
       if((a1-b1)*(a1-c1)<=0){
         if((a2-b2)*(a2-c2)<0)cout<<1<<endl;
         else cout<<min(abs(a2-b2),abs(a2-c2))+1<<endl;
       }
       else{
         int dx=min(abs(a1-b1),abs(a1-c1));
         if((a2-b2)*(a2-c2)<0)cout<<dx+1<<endl;
         else cout<<min(abs(a2-b2),abs(a2-c2))+1+dx<<endl;


       }

   }
       

   return 0;

}


