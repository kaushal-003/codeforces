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
    vector<ll>arr(n);
    fr(0,n)cin>>arr[i];
    ll max_odd=-1;
    ll max_even = -1;
    ll even_sum = 0;
    ll ce =0;
    fr(0,n){
        if(arr[i]%2==1){
            max_odd=max(max_odd,arr[i]);
        }
        else{
            ce++;
            max_even = max(max_even,arr[i]);
            even_sum+=arr[i];
        }
    }
    if(max_odd==-1 || max_even==-1){
        cout<<0<<endl;
    }
    else{
        vector<ll>arr2;        
        fr(0,n){
            if(arr[i]%2==0){
                arr2.push_back(arr[i]);
            }
        }
        sort(arr2.begin(),arr2.end());
        int c=0;
        int k = arr2.size();
        bool b=false;
        fr(0,k){
            if(arr2[i]>max_odd){
                b = true;
                break;
                max_odd = max_odd+2*arr2[i];
                c+=2;
            }
            else{
                max_odd=max_odd+arr2[i];
                c++;
            }
        }
        ll ans = (b==true)?k+1:k;
        cout<<ans<<endl;
    }
   }
   return 0;
}
