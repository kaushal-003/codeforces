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


ll sum(int k){
    ll ans = ((k)*(k+1))/2;
    return ans;
}

ll func(vector<vector<int>>&arr,int k){
    int ans = -1;
    for(auto a:arr){
        int l = a.size();
        set<int>s;
        s.insert(k);
        fr(0,l){
            int k1 = a[i];
            s.insert(k1);
        }
        int mn = 0;
        bool b = false;
        for(auto it:s){
            if(it!=mn){
                b = true;
                // mn++;
                break;
            }
            mn++;
        }
        if(!b)mn = l;
        if(ans == -1) ans = mn;
        else ans = max(ans,mn);
    }
    return ans;
}

int main(){
    init_code();
    read(t);
    while(t--){
        int n,m;
        cin>>n>>m;
        ll ans = -1;
        vector<vector<int>>arr(n);
        int ab = 0;
        while(n--){
            int l;
            cin>>l;
            set<ll>s;
            fr(0,l){
                int k;cin>>k;
                arr[ab].push_back(k);
                s.insert(k);
            }
            ll mn = 0;
            bool b = false;
            for(auto it:s){
                if(it!=mn){
                    b = true;
                    break;
                }
                mn++;
            }
            if(!b)mn = l;
            if(ans == -1) ans = mn;
            else ans = max(ans,mn);
            ab++;
        }
        ll a = 0;
        cout<<"ans"<<ans<<endl;
        ll ans2 = func(arr,ans);
        cout<<ans2<<endl;
        if(m>=ans){
            a+= ans2*(ans2+1);
            a += (sum(m)-sum(ans2));
        }
        else{
            a+= ans2*(m+1);
        }
        cout<<a<<endl;
    }
    return 0;
}