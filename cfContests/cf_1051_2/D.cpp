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

map<string,int>dp;

int helper(vector<int>&arr,int ind, string s ,int& n){
    if(ind==n){
        return 1;
    }
    bool b = true;
    int c =-1;
    int c1 = -1;
    for(int i = 0;i<ind;i++){
        if(s[i]=='1' &&arr[i]>arr[ind]){
            c = i;
        }
    }
    for(int i = 0;i<c;i++){
        if(s[i]=='1' && arr[i]>arr[c]){
            c1 = i;
        }
    }

    if(c1!=-1)b = false;
    if(b){
        int nottake = helper(arr,ind+1,s,n);
        s[ind] = '1';
        int ans = (helper(arr,ind+1,s,n) + nottake)%mod;
        return ans;
    }
    return helper(arr,ind+1,s,n);

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>arr(n);
        fr(0,n)cin>>arr[i];
        string s = "";
        fr(0,n){
           s+="0";
        }
        vector<int>lastprevious(n,-1);
        // for(auto it:dp){
        //    cout<<it.first<<" "<<it.second<<endl;
        // }
        cout<<helper(arr, 0, s, n)<<endl;
    }
    return 0;
}
