#include <bits/stdc++.h>
#include <csignal>
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

static bool cmp(float a,float b){
    return a>b;
}

void solve(){
    int n;
    cin>>n;
    vector<float>arr(n);
    fr(0,n)cin>>arr[i];
    sort(arr.begin(),arr.end(),cmp);
    int a,x,b,y;
    cin>>a>>x>>b>>y;
    float k;
    cin>>k;
    int counter = 0;
    int ans = -1;
    fr(1,n+1){
        if(i%x==0 && i%y==0){
            k-= (arr[counter]*(a+b)/100.0);
            counter++;
        }
        else if(i%x==0){
            k-= (arr[counter]*(a)/100.0);
            counter++;
        }
        else if(i%y==0){
            k-= (arr[counter]*(b)/100.0);
            counter++;
        }
        cout<<k<<" "<<counter<<endl;
        if(k<=0){
            ans = i;
            break;
        }
    }
    cout<<ans<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
