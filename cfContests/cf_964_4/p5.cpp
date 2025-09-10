#include <bits/stdc++.h>
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



const int MAX = 200001;


int main(){
   init_code(); 
   read(t);
   while(t--){
    int n;
    int k;
    cin>>n>>k;
    int arr[n];
    fr(0,n)cin>>arr[i];
    int n0=0;
    fr(0,n){
        if(arr[i] == 0) n0++;
    }
    int n1 = n-n0;
    ll c =0;
    fr((k/2)+1,min(k+1,n1+1)){
        if(n0>=k-i){
            
        c = (c +((ncr(n1,i)*ncr(n0,k-i))%mod))%mod;
        }
    }
    cout<<c<<endl;
   }
   return 0;
}
