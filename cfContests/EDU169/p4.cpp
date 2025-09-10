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
    if(p1.first>p2.first) return true;
    if(p1.first==p2.first) return p1.second>p2.second;
    return false;
}

int binary(vector<pair<int,int>>&arr, int i){

}

int conv(string s){
    int k = 0;
        for(char c:s){
            if(c=='B') k = k | (1<<0);
            if(c=='R') k = k | (1<<1);
            if(c=='Y') k = k | (1<<2);
            if(c=='G') k = k | (1<<3);
        }
    return k;
}

int lowerBound(vector<int> arr, int n, int x) {
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high) {
        int mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] >= x) {
            ans = mid;
            //look for smaller index on the left
            high = mid - 1;
        }
        else {
            low = mid + 1; // look on the right
        }
    }
    return ans;
}

int upperBound(vector<int> &arr, int x, int n) {
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high) {
        int mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] > x) {
            ans = mid;
            //look for smaller index on the left
            high = mid - 1;
        }
        else {
            low = mid + 1; // look on the right
        }
    }
    return ans;
}

int binary(vector<int>&arr,int a,int b){
    int n = arr.size();
    int ans1 = lowerBound(arr,n,a);
    int ans2 = upperBound(arr,n,b);
    if(ans1==n && ans2==n)return arr[n-1];
    if(ans1 == n) return arr[ans2];
    if(ans2 == n) return arr[ans1];
    if(b>arr[ans1]) return arr[ans1];
    if(a<arr[ans2]) return arr[ans2];
    int k1 = lowerBound(arr,n,a);
    int k2 = upperBound(arr,n,b);
    if(a-k1>k2-b)return arr[k2];
    return arr[k1];
}
int main(){
   init_code();
   read(t);
   while(t--){
    int n,q;
    cin>>n>>q;
    vector<string>str(n);
    map<int,int>mpp;
    vector<vector<int>>arr(13);
    fr(0,n){
        string s;
        cin>>s;
        str[i] = s;
        int k = 0;
        for(char c:s){
            if(c=='B') k = k | (1<<0); 
            if(c=='R') k = k | (1<<1);
            if(c=='Y') k = k | (1<<2);
            if(c=='G') k = k | (1<<3);
        }
        if(mpp.find(k)==mpp.end()){
            mpp[k]= i;
        }
        arr[k].push_back(i);
    }
    // sort(arr.begin(),arr.end(),cmp);
    fr(0,q){
        int a,b;
        cin>>a>>b;
        if(a>b){
            int temp = a;
            a = b;
            b = temp;
        }
        string s1 = str[a-1];
        string s2 = str[b-1];
        int k1 = conv(s1);
        int k2 = conv(s2);
        if((k1 & k2)>0)cout<<abs(b-a)<<endl;
        else{
            int ans = 1e9;
            for(char c1:s1){
                for(char c2:s2){
                    string s="";
                    s+=c1;
                    s+=c2;
                    int con = conv(s);
                    if(mpp.find(con)!=mpp.end()){
                        int k1 = binary(arr[con],a-1,b-1);
                        if(k1>b-1){

                            ans= min(ans,2*k1-a-b+2);
                        }
                        else{
                            ans = b-a;
                        }
                    }
                }
            }
            if(ans == 1e9)cout<<-1<<endl;
            else cout<<ans<<endl;
        }
    }
   }
   return 0;
}
