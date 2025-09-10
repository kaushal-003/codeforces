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
void kMaxSumCombination(vector<int> &a, vector<int> &b, int n, int k){
   // Write your code here.
   priority_queue<int,vector<int>,greater<int>>pq1;
   priority_queue<int,vector<int>,greater<int>>pq2;
   for(int i=0;i<n;i++){
      pq1.push(a[i]);
      pq2.push(b[i]);
   }
   vector<int>v;
   for(int i=0;i<k;i++){
      v.push_back(pq1.top()+pq2.top());
      if(pq1.top()>pq2.top()){
         pq2.pop();
      }else{
         pq1.pop();
      }
   }
   for(int i=0;i<v.size();i++){
          cout<<v[i]<<endl;
   }

}
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
         int n,k;
         cin>>n>>k;
         vector<int>a;
         vector<int>b;
         for(int i=0;i<n;i++){
            int t1;
            cin>>t1;
            a.push_back(t1);
         }
         for(int i=0;i<n;i++){
            int t1;
            cin>>t1;
            a.push_back(t1);
         }
         vector<int>v;
         kMaxSumCombination(a,b,n,k);
         
         

         

   }
   return 0;
}


