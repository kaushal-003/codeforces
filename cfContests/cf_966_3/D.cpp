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
     int n;
     cin>>n;
     vector<int>arr(n);
     string s;
     fr(0,n)cin>>arr[i];
     cin>>s;
     vector<ll>prefix(n+1);
     prefix[0]=0;
     fr(0,n){
        prefix[i+1] = prefix[i]+arr[i];
     }
     vector<int>l,r;
     fr(0,n){
        if(s[i]=='L')l.push_back(i);
     }
     for(int i=n-1;i>=0;i--){
        if(s[i]=='R')r.push_back(i);
     }
     int i=0;
     int j=0;
     int k1 = l.size();
     int k2 = r.size();
     ll sum =0;
     while(i<k1 && j<k2){
        // cout<<prefix[j+1]<<" "<<prefix[i]<<endl;
        if(l[i]<r[j]){
        sum+=prefix[r[j]+1]-prefix[l[i]];
        i++;
        j++;
        }
        else{
            break;
        }
     }
     cout<<sum<<endl;
    }

    return 0;
}
