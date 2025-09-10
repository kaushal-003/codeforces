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


unordered_map<int,int>mpp;
void printDivisors2(int n) 
{ 
    // Note that this loop runs till square root 
   int c=0;
    for (int i=1; i<=sqrt(n); i++) 
    { 
        if (n%i == 0) 
        { 
            // If divisors are equal, print only one 
            if (n/i == i) 
                mpp[i]=1;  
            else {
               if(i!=1)
                mpp[i]=1;
                mpp[n/i]=1;
             }   
        } 
    }
} 
void printDivisors(int n) 
{ 
    // Note that this loop runs till square root 
   int c=0;
    for (int i=1; i<=sqrt(n); i++) 
    { 
        if (n%i == 0) 
        { 
            // If divisors are equal, print only one 
            if (n/i == i) 
                mpp[i]=1;  
            else{ // Otherwise print both 
                mpp[i]=1;
                if(n/i!=n)
                mpp[n/i]=1;
            }
        } 
    }
} 
   int main() {
      init_code();
      int t;
      cin >> t;
      while (t--) {
         
         int a,b;
         cin>>a>>b;
         int large=a+b-2;
         int small=a-b;
         int ans=0;
         if(small%2==0){
            
            printDivisors(small/2);
         }
         if(large%2==0){
            printDivisors(large/2);
         }
        int size=0;
        for(auto it:mpp){
         if(it.first>=b-1)size++;
        }
        cout<<size<<endl;
      }
      
      return 0;
         
         
   }




