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

int bs(vector<int>&arr, int n, int val){
    int low = 0;
    int high = n-1;
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]<val){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid-1;
        }
    }
    return ans;
}

int main(){
    int t;
    t = 1;
    while (t--) {
        int n,m;
        cin>>n>>m;
        vector<int>arr(n);
        fr(0,n)cin>>arr[i];
        sort(arr.begin(),arr.end());
        while(m--){
            int q;
            cin>>q;
            cout<<n-1-bs(arr,n,q)<<endl;
        }
    }

    return 0;
}
