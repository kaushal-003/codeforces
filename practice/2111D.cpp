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
    int t;
    cin >> t;
    while (t--) {
        ll m;cin>>m;
        ll n;cin>>n;
        vector<vector<ll>>arr(n,vector<ll>(2));
        fr(0,n){
            cin>>arr[i][1];
            arr[i][0] = arr[i][1]/100;
        }
        sort(arr.begin(),arr.end());
        int si = 0;
        int ei = n-1;
        for(int i = 0;i<m;i+=2){
            int fc = arr[si][1];
            int sc = arr[ei][1];
            if(i<m-1){
                cout<<fc<<" "<<sc<<" "<<fc<<" "<<sc<<" "<<fc<<" "<<sc<<endl;
                cout<<sc<<" "<<fc<<" "<<sc<<" "<<fc<<" "<<sc<<" "<<fc<<endl;
            }
            else{
                cout<<sc<<" "<<fc<<" "<<sc<<" "<<fc<<" "<<sc<<" "<<fc<<endl;
            }
            si++;
            ei--;
        }

    }

    return 0;


}
