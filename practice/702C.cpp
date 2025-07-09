#include<bits/stdc++.h>
#include <ios>
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

int bs(vector<int>cities, vector<int>towers,int n, int m){
    int l = 0, r = cities[n-1]-cities[0];
    int ans = r;
    while(l<=r){
        int mid = (l+r)/2;
        int curr = 0;
        fr(0,m){
            int k = towers[i];
            if(curr == n)break;
            while(curr<n  && (cities[curr]>=k-mid && cities[curr]<=k+mid)){
                curr++;
            }
        }
        if(curr==n){
            ans = mid;
            r = mid-1;
        }
        else l = mid+1;
    }
    return ans;
}

int main(){
    int t;
    t = 1;
    while (t--) {
        int n,m;
        cin>>n>>m;
        vector<int>cities(n);
        fr(0,n)cin>>cities[i];
        vector<int>towers(m);
        fr(0,m)cin>>towers[i];
        cout<<bs(cities,towers,n,m)<<endl;
    }

    return 0;
}
