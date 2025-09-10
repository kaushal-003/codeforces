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
   #define read(x) ll x; cin >> x
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
         read(n);
         read(m);
         vector<int>arr1(n);
         vector<int>arr2(m);
         fr(0,n)cin>>arr1[i];
         fr(0,m)cin>>arr2[i];
         sort(arr1.begin(),arr1.end());
         sort(arr2.begin(),arr2.end());
         int k=n;
         int s1=0;
         int e1=n-1;
         int s2=0;
         int e2=m-1;
         int j=m;
         ll sum=0;
         while(k--){
            if(abs(arr1[s1]-arr2[e2])>abs(arr1[e1]-arr2[s2])){
               sum+=abs(arr1[s1]-arr2[e2]);
               s1++;
               e2--;
            }
            else{
               sum+=abs(arr2[s2]-arr1[e1]);
               s2++;
               e1--;
            }
         }
         cout<<sum<<endl;

      }

      
      return 0;
         
         
   }




