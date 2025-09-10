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
      int n;
      cin>>n;
      vector<int>v(n);
      for(int i=0;i<n;i++){
         cin>>v[i];
      }
      ll sum=0;
      for(int i=0;i<n;i++){
         sum+=abs(v[i]);
      }
      int count=0;
      int a=0;
      int ind1=0;  
      int ind2=0;
      int i=0; 
      while(i<n){
         if(v[i]<=0)i++;
         else {
            ind2=i;
            for(int j=ind1;j<ind2;j++){
               if(v[j]<0){
                  count++;
                  break;
            }
            }
            ind1=ind2;
            i++;
      }

    
      }
        for(int j=ind2;j<n;j++){
         if(v[j]<0){
            count+=1;
            break;
         }
      }

      cout<<sum<<" "<<count<<endl;
        
   }
   return 0;

}


