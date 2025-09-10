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
#define goog(tno) cout << "Case #" << tno <<": "ṇ
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
        int n;
        cin>>n;
        vector<int>arr(n);
        fr(0,n)cin>>arr[i];
        int oc = 0;
        int om = 0;
        int ec = 0;
        int em = 0;
        fr(0,n){
            if(i%2==0){
                ec++;
                em = max(em,arr[i]);
            }
            else{
                oc++;
                om = max(om,arr[i]);
            }
        }
        cout<<max(oc+om,ec+em)<<endl;
    }
    return 0;
}