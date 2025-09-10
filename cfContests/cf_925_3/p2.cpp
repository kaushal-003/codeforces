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
         int arr[n];
         fr(0,n){cin>>arr[i];}
         int c=n;
         int si=0;
         int ei=n-1;
         while(si<n & arr[si]==arr[0]){
            si++;
         }
         while(ei>=0 & arr[ei]==arr[n-1]){
            ei--;
         } 
         si--;
         ei++; 
         if(arr[si]==arr[ei]){
            int a1=si+1;
            int a2=n-(ei);
            if(si>=ei){
               cout<<0<<endl;
            }
            else
            cout<<(n-a1-a2)<<endl;
         }
         else{
             int a1=n-si-1;
            int a2=(ei);
            cout<<min(n-si-1,ei)<<endl;
         }       
      }
      
      return 0;
      }
         
         
   




