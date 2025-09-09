#include <asm-generic/errno.h>
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
#define mod2 998244353
void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

int main() {
    int t=1;
    while (t--) {
        int n;cin>>n;
        vector<int>arr(n);
        fr(0,n) cin>>arr[i];
        map<int,int>prev;
        prev[arr[0]]++;
        map<int,int>mpp;
        fr(1,n){
            int curr = arr[i];
            for(auto it:prev){
                int c = it.first;
                int sum = (c+curr)%10;
                int prod = (c*curr)%10;
                if(mpp.find(sum)!=mpp.end()){
                    mpp[sum] =(mpp[sum]+ prev[c])%mod2;
                }
                else{
                    mpp[sum] =(prev[c])%mod2;
                }
                if(mpp.find(prod)!=mpp.end()){
                    mpp[prod] =(mpp[prod]+ prev[c])%mod2;
                }
                else{
                    mpp[prod] =(prev[c])%mod2;
                }
            }
            prev = mpp;
            mpp.clear();
        }


        fr(0,10){
            if(prev.find(i) != prev.end()){
                cout<<prev[i]<<"\n";
            }
            else{
                cout<<0<<"\n";
            }
        }
    }
    return 0;


}
