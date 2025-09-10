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
ll pow(ll a,ll b){
    ll c =1;
    while(b--){
        c=c*a;    
    }
    return c%mod;
}
bool str1(int temp){
     string t = to_string(temp);

    int m = t.length();
    bool  isTrue = true;
    if(m==1){
        return true;
    }else{
         isTrue = true;
        for(int k=0;k<(m)/2;k++){
            if(t[k]!=t[m-k-1]){
                isTrue=false;
                break;
               }
          }

      }
      return isTrue;
}
int main() {
   // your code goes here
   init_code();
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       int* arr=new int[n];
       for(int i=0;i<n;i++){
           cin>>arr[i];
       }
       unordered_map<int,int>map;
       unordered_map<int,int>map2;
       for(int i=0;i<n;i++){
           for(int j=i+1;j<n;j++){
               int t=arr[i]^arr[j];
               if(map.count(t)>0){
                  
                   map[t]++;
               }
               else{
                  if(map2.count)
                  if(str1(t)){
                   map[t]=1;
                  }
               }
           }
       }
       unordered_map<int,int>:: iterator it=map.begin();
       int ways=0;
       while(it!=map.end()){
           

             ways+=it->second;
 
         it++;
       } 
       cout<<ways+n<<endl;
   }
   return 0;
}