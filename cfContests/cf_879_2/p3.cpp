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
        string s1,s2,s3;
        cin>>s1>>s2;
        s3=s1;
        for(int i=0;i<n;i++){
            s3[i]=s1[n-1-i];
        }
        int num=0;
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i]){
               num++;
            }
        }
        int rnum=0;
        for(int i=0;i<n;i++){
            if(s3[i]!=s2[i]){
               rnum++;
            }
        }
        int t1=0;
        int t2=0;
        if(num==0) cout<<0 <<endl;
        else if(rnum==0)cout<<2<<endl;
        else {
         if(num%2==1)
         t1=2*num-1;
         else t1=2*num;
   
         if(rnum%2==0)
         t2=2*rnum-1;
         else
         t2=2*rnum;
         cout<<min(t1,t2)<<endl;
        }

      

   }
   return 0;

}


