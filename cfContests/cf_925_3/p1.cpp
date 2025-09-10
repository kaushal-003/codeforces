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
        int a1,a2,a3=0;
        for(char i='a';i<='z';i++){
           for(char j='a';j<='z';j++){
            for(char k='a';k<='z';k++){
             a1=i+1-'a';
             a2=j+1-'a';
             a3=k+1-'a';
            if(a1+a2+a3==n){
                cout<<i<<j<<k<<endl;
                break;
            }
        }
        if(a1+a2+a3==n){
                
                break;
            }

        } 
        if(a1+a2+a3==n){
                
                break;
            }

        }
      }
      
      return 0;
         
         
   }




