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



int main(){
    init_code();
    read(t);
    while(t--){
     read(n);
     vector<int>arr(n);
     fr(0,n)cin>>arr[i];
     int m;
     cin>>m;
     fr(0,m){
        string s;
        cin>>s;
        map<char,int>mpp1;
        map<int,char>mpp2;
        int k = s.size();
        bool b = true;
        if(k!=n)b=false;
        if(b){
        fr(0,k){
            if(mpp1.find(s[i])==mpp1.end() && mpp2.find(arr[i])==mpp2.end()){
                mpp1[s[i]] = arr[i];
                mpp2[arr[i]] = s[i];
            }
            else{
                if(mpp1[s[i]]!=arr[i] || mpp2[arr[i]]!=s[i]){
                    b = false;
                }
            }
            if(!b)break;
        }
        }
        if(b)cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
     }  
    }
    return 0;
}
