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


    class SGTree{
        vector<ll>seg;
        public:
        SGTree(int n){
            seg.resize(4*n+1);
        }

        void build(int l, int h, vector<int>&arr, int ind){
            if(l==h){
                seg[ind] = arr[l];
                return;
            }
            int mid = (l+h)/2;
            build(l,mid,arr,2*ind+1);
            build(mid+1,h,arr,2*ind+2);
            seg[ind] = seg[2*ind+1]^seg[2*ind+2];
        }

        ll query(int low, int high, vector<int>&arr, int ind, int l, int r){
            if(high<l || r<low) return 0;
            if(low>=l && high<=r) return seg[ind];
            int mid = (low+high)/2;
            ll left = query(low,mid,arr,2*ind+1,l,r);
            ll right = query(mid+1,high,arr,2*ind+2,l,r);
            return left^right;
        }
    };

    int main() {
    int n,q;
    cin>>n>>q;
    vector<int>arr(n);
    fr(0,n)cin>>arr[i];
    SGTree sg(n);
    sg.build(0,n-1,arr,0);
        while(q--){
            int l,r;
            cin>>l>>r;
            l--;
            r--;
            ll k = sg.query(0,n-1,arr,0,l,r);
            cout<<k<<"\n";
        }
    return 0;

    }


