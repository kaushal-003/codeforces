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
         int qi=0;
         int qj=0;
         char arr[3][3];
         for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
               cin>>arr[i][j];
               if(arr[i][j]=='?'){
                  qi=i;
                  qj=j;
               }
            }
         }
         int c=(int('A')^int('B'))^int('C');
         for(int i=0;i<3;i++){
            if(arr[qi][i]!='?'){
               c=c^(int(arr[qi][i]));
            }
         }
         cout<<char(c)<<endl;

      }
      
      return 0;
         
         
   }




