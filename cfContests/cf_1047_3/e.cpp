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

vector<int> mex(vector<int>& arr, int N,
                vector<vector<int> > queries, int q)
{
    // Initialize a map to store element frequencies
    map<int, int> mp;

    // Initialize a set to store non-present elements
    set<int> st;

    // Populate the map for the initial array
    for (int i = 0; i < N; i++) {
        mp[arr[i]]++;
    }

    // Add the elements to set which are not present in the
    // array.
    for (int i = 0; i <= N; i++) {
        if (mp[i] == 0)
            st.insert(i);
    }

    // Initialize a vector to store MEX values after each
    // query
    vector<int> mex;

    // Process each query
    for (int i = 0; i < q; i++) {
        int idx = queries[i][0];
        int val = queries[i][1];
        int prev= arr[idx];
        // Update the frequency of element which being
        // replaced.
        mp[arr[idx]]--;

        // If the frequency of element which is being
        // replaced becomes 0, add it to set.
        if (mp[arr[idx]] == 0) {
            st.insert(arr[idx]);
        }
        // arr[idx] = val;
        // mp[arr[idx]]++;

        // If the updated element is in the set, remove it
        // if (st.find(arr[idx]) != st.end())
        //     st.erase(arr[idx]);

        // Calculate the MEX and add it to the result vector
        int ans = *st.begin();
        mex.push_back(ans);
        // mp[arr[idx]]--;
        arr[idx] = prev;
        if(st.find(arr[idx])!=st.end())st.erase(arr[idx]);
        mp[arr[idx]]++;
    }

    return mex;
}

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        fr(0,n)cin>>arr[i];
        // vector<int,int>mpp;
        // for(auto it:arr){
        //     mpp[it]++;
        // }
        vector<int>first(n);

        vector<vector<int>>q(n,vector<int>(2));
        fr(0,n){
            q[i][0] = i;
            q[i][1] = INT_MAX;
        }
        vector<int>fi = mex(arr,n,q,n);
        vector<int>sec = mex(fi,n,q,n);
        vector<int>third = mex(sec,n,q,n);
        ll sum = 0;
        if(k==1){
            fr(0,n){
             sum +=fi[i];
            }
        }
        else if(k%2==1){
            fr(0,n){
             sum +=third[i];
            }
        }
        else{
            fr(0,n){
              sum+=sec[i];
            }
        }
        cout<<sum<<endl;
    }


    return 0;


}
