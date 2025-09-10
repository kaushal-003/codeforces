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

int logg(int a)
{
    int c=0;
    while(a>0){
        c++;
        a=a/3;
    }
    return c;
}

int lowestPower(int k){
    int ans = 1;
    while(ans<=k){
        ans=ans*3;
    }
    return ans/3;
}
int main(){
   init_code();
   read(t);
   while(t--){
    int l,r;
    cin>>l>>r;
    ll count = 0;
    int fc = -1;
    while(l<=r){
        int k = lowestPower(l);
        if(k==l){
            int ans = logg(l);
            if(fc==-1) fc=ans;
            count+=ans;
            l++;
        }
        else{
            k=k*3;
            int ans = logg(k-1);
            if(fc==-1) fc=ans;
            if(k<=r){
                count+=(k-l)*ans;
                l = k;
            }
            else{
                count+=(r-l+1)*ans;
                break;
            }
        }
        // cout<<count<<" "<<l<<endl;
    }
    cout<<count+fc<<endl;
   }
   return 0;
}
