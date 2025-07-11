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

    int upper_bound(vector<int>&arr, int val){
        int l = 0, r = arr.size()-1;
        int ans = 0;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(arr[mid]<=val){
                ans = mid+1;
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        return ans;
    }


    int main() {
        // init_code();
        int t;
        t = 1;
        while (t--) {
            int n;
            cin>>n;
            vector<int>arr(n);
            fr(0,n)cin>>arr[i];
            sort(arr.begin(),arr.end());

            int q;
            cin>>q;
            while(q--){
                int x;
                cin>>x;
                cout<<upper_bound(arr, x)<<endl;
            }
        }

        return 0;


    }
