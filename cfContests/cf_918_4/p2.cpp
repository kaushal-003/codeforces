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
   #define read(x) int x; cin >> x   #include<bits/stdc++.h>
   
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

         cout<<(int)'A';
      }
      
      return 0;
         
         
   }





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
      int n;
      cin>>n;
      int arr[n][2];
      for(int i=0;i<n;i++){
         cin>>arr[i][0];
         cin>>arr[i][1];
      }
      int pm=arr[0][0];
      int qm=arr[0][1];
      int pi=0;
      int qi=0;
      for(int i=0;i<n;i++){
         if(arr[i][0]>pm){
            pm=arr[i][0];
            pi=i;
         }
         if(arr[i][1]>qm){
            qm=arr[i][1]   ;
            qi=i;
         }
      }

      if(arr[pi][0]>arr[qi][0] && arr[pi][1]<arr[qi][1]){
         cout<<"Happy Alex"<<endl;
      }  
      else{
         cout<<"Poor Alex"<<endl;
      }  
   }




