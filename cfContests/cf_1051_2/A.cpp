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
#define goog(tno) cout << "Case #" << tno <<": "ṇ
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

bool check(vector<int>&arr, int max,int n){
    //check all max are togather
    int prevmax = 0;
    fr(0,n){
        if(arr[i]==max){
            if(prevmax == 0){
                prevmax = 1;
            }
            if(prevmax == 2)return false;
        }
        else{
            if(prevmax==1){
                prevmax = 2;
            }
        }
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        fr(0,n)cin>>arr[i];
        int a = n;
        bool b = true;
        while(a>0){
            if(check(arr, a, n)){
                for(int i = 0; i < n; i++){
                    if(arr[i] == a){
                        arr[i] = a-1;
                    }
                }
                a--;
            }
            else{
                b = false;
                break;
            }
        }
        if(b){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
