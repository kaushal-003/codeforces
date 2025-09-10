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

bool cmp(int a,int b){
    return a>b;
}

int main() {
    init_code();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>arr(n);
        map<int,int>mpp;
        int l = n+1;
        int h = 0;
        fr(0,n){
            cin>>arr[i];
            mpp[arr[i]]++;
            h = max(h,arr[i]);
            l = min(l,arr[i]);
        }
        bool b = false;
        // cout<<l<<h<<endl;
        vector<int>arr2;
        for(auto it:mpp){
            arr2.push_back(it.first);
        }
        sort(arr2.begin(),arr2.end(),cmp);
        // for(int i = 0;i<arr2.size();i++ ){
        //         cout<<arr2[i]<<" "<<mpp[arr2[i]]<<endl;
        // }
    
        for(int i = 0;i<arr2.size();i++){
            if(mpp[arr2[i]]%2==1){
                b=true;
                break;
            }
        }
        if(!b)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    
    }
    return 0;
}



