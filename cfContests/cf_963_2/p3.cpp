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

void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

int main(){
   init_code();
   read(t);
   while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    fr(0,n)cin>>arr[i];
    sort(arr.begin(),arr.end());
    int last = arr[n-1];
    for(int i=0;i<n-1;i++){
        int p1 = last%(2*k);
        int p2 = arr[i]%(2*k);
        arr[i] =last+p2-p1;
        if(last-arr[i]>=k)arr[i]+=2*k;
        if(arr[i]-last>=k)arr[i]-=2*k;
    }  
    // fr(0,n){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    int l = arr[0];
    int r = arr[0]+k-1;
    bool b = true;
    fr(0,n){
       
        l=max(l,arr[i]);
        r=min(r,arr[i]+k-1);
        
    }
    if(l>r){
        cout<<-1<<endl;
    }
    else{
        cout<<l<<endl;
    }
   }
   return 0;
}
