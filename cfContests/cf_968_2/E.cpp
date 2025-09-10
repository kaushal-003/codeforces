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

bool cmp(pair<int,int>p1,pair<int,int>p2){
    return p1.first<p2.first;
}

int main(){
    init_code();
    
    int n;
    cin>>n;
    vector<int>arr(n);
    fr(0,n)cin>>arr[i];
    int ans = 1;
    int i,j=0;
    map<int,int>mpp;
    while(j<n){
        if(mpp.find(arr[j]) == mpp.end()){
            cout<<j<<endl;
            mpp[arr[j]]=j;
            ans = max(ans,(int)mpp.size());
            j++;
        }
        else{
            i = mpp[arr[j]]+1;
            for(auto it:mpp){
                if(it.second<i){
                    mpp.erase(it.first);
                }
            }
            // mpp[arr[i-1]]=i-1;
            j++;
        }
    }
    cout<<ans<<endl;

    return 0;
}