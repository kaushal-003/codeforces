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
        vector<int>arr(n);
         
        for(int i=0;i<n;i++){
            cin>>arr[i];
          
        }
        int c=arr[0];;
        for(int i=1;i<n;i++){
            c&=arr[i];
         }
        if(c!=0)cout<<1<<endl;
        else{
         int coun=0;
         int t=arr[0];
         for(int i=1;i<n;i++){
            if(t==c){
               coun++;
               t=arr[i];
            }
            else{
               t&=arr[i];
            }
         }
         if(t==0)coun++;
        cout<<coun<<endl;
        }
        
        // vector<int>p(n);   
        // p[0]=arr[0];
        // for(int i=1;i<n;i++){
        //  if(p[i-1]==0)p[i]=arr[i];
        //  else p[i]=p[i-1]&arr[i];

        // }
        // vector<int>s(n);
        // s[n-1]=arr[n-1];
        // for(int i=n-2;i>=0;i--){
        //  if(s[i+1]==0)s[i]=arr[i];
        //  else s[i]=s[i+1]&arr[i];
        // }
        // int last=s[0];
        // int c=1;
        // for(int i=0;i<n-1;i++){
        //  // cout<<p[i]<<" "<<s[i]<<endl;
        //  if(s[i+1]==0 && p[i]==0){
        //     c++;
        //  }
        // }
        // cout<<p.size()<<s.size()<<endl;
        // for(int i=0;i<n;i++){
        //  cout<<p[i]<<" "<<s[i]<<" ";
         
        // }
        

         
   }
   return 0;
        
        

}


