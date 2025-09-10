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
    read(n);
    vector<int>arr(n);
    fr(0,n)cin>>arr[i];
    sort(arr.begin(),arr.end());
    ll sum = 0;
    int c = 0;
    int k =-1;
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            if(k==-1)k = i;
            sum+=arr[i];
            c++;
        }
    }
    int i=k-1;
    // cout<<sum<<k<<endl;
    while(i>=0 && arr[i]<0 && sum>=abs(arr[i])){
        sum+=arr[i];
        i--;
        c++;
    }
    cout<<c<<endl;
    return 0;
}