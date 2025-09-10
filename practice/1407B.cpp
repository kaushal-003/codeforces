#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL << 60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll, pair<ll, ll>>
#define goog(tno) cout << "Case #" << tno << ": "
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define read(x) ll x; cin >> x
using namespace std;

bool cmp(int a,int b){
    return a>b;
}

vector<int> factors(int n){
    vector<int> f;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            f.push_back(i);
            if(i!=n/i) f.push_back(n/i);
        }
    }
    return f;
}

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end(),cmp);
    vector<int> b;
    b.push_back(a[0]);
    vector<vector<int>>arr(1001);
    fr(1,n){
        int k = a[i];
        int mul = 2;
        while(k<=1000){
            arr[k].push_back(a[i]);
            k = mul*a[i];
            mul++;
        }
    }
    fr(1,n){
        vector<int>f = factors(b[i-1]);
        sort(f.begin(),f.end(),cmp);
        fr(0,f.size()){
            if(arr[f[i]].size()!=0){
                b.push_back(__gcd(arr[f[i]][0],b[i-1]));
                arr[f[i]].erase(arr[f[i]].begin());
                break;
            }
        }
        cout<<b[i]<<" ";
    }
    fr(0,n)cout<<b[i]<<" ";
    cout<<endl;
}

int main()
{
    int t;cin>>t;
    while(t--)
        solve();
    return 0;
}
