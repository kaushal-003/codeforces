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


int main() {
    init_code();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int a,b;
        cin>>a>>b;
        int arr[n];
        int c=0;
        fr(0,n)cin>>arr[i];
        sort(arr,arr+n);
        unordered_map<int,int>mpp;
        int mx=0;
        for(int i=0;i<n;i++){
        if(mpp.count(arr[i])==0)mpp[arr[i]]=0;
        mpp[arr[i]]++;
        if(mx<arr[i])mx=arr[i];
        }

        for(int i=0;i<n;i++){
            while(i+1<n && arr[i+1]==arr[i]){
                i++;
            }
            int f1=mpp[arr[i]];
            int b1=b+arr[i];
            while(b1<=mx){
                int f2=0;
                if(mpp.find(b1)!=mpp.end()) f2=mpp[b1];
                if((arr[i]+b1)%a==0){
                    c+=f1*f2;
                }
                b1+=b;
            }
            if((2*arr[i])%a==0){
                c+=(f1)*(f1-1)/2;
            }

        }
        cout<<c<<endl;
    }

    return 0;


}



 
