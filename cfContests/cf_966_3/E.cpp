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

bool cmp(ll a,ll b){
    return a>b;
}

int main(){
    init_code();
    read(t);
    while(t--){
     int n,m,k;
     cin>>n>>m>>k;
     if(m>n){
        int temp = m;
        m = n;
        n = temp;
     }
     int w;
     cin>>w;
     vector<int>arr(w);
     fr(0,w)cin>>arr[i];
     sort(arr.begin(),arr.end(),cmp);
     vector<ll>prefix(w+1);
     prefix[0]=0;
     fr(0,w){
        prefix[i+1] = arr[i]+prefix[i];
     }
     int r = n-2*k+2;
     int c = m-2*k+2;
    if(r>0 && c>0){
     int prod = r*c;
     int ind = 0;
     ll ans = 0;
     ll mul = k;

     ll sum = 0;
     int mn = min(r*c,w);
     fr(0,mn){
        sum+=arr[ind];
        ind++;
     }
     ans+=(k*k*sum);
    //  cout<<"ans"<<" "<<r<<" "<<c<<" "<<ans<<endl;
     while(ind<w){
        int place = 2*r+2*c;
        int mn = min(ind+place,w);
        sum= 0;
        while(ind<mn){
            sum+=arr[ind];
            ind++;
        }
        ans +=(sum*(mul)*(mul-1));
        // cout<<mn<<" "<<(sum*(mul)*(mul-1))<<endl;
        sum = 0;
        int z =0;
        while(ind<w && z<4){
            sum+=arr[ind];
            ind++;
        }
        ans +=(sum*(mul-1)*(mul-1));
        // cout<<"ans"<<" "<<mul<<" "<<place<<endl;
        mul--;
        r++;
        c++;

     }
        cout<<ans<<endl;
    }
    else{
        int rm = n-k+1;
        int cm = m-k+1;
        r = n-2*rm+2;
        c = m - 2*cm+2;
        ll ans = 0;
        ll mul = rm*cm;
        int ind = 0;
        ll sum = 0;
        int mn = min(r*c,w);
        fr(0,mn){
            sum+=arr[ind];
            ind++;
        }
        ans+=(mul*sum);
        //  cout<<"ans"<<" "<<rm<<" "<<cm<<" "<<ans<<endl;
        while(ind<w){
            int place = 2*r;
            int mn = min(ind+place,w);
            sum= 0;
            while(ind<mn){
                sum+=arr[ind];
                ind++;
            }
            ans +=(sum*(rm-1));

            // cout<<"ans"<<" "<<mul<<" "<<place<<endl;
            rm--;
            r++;
            c++;

        }
            cout<<ans<<endl;


    }
    
    }
    return 0;
}
