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

bool cmp(int a,int b){
    return a>b;
}
int main(){
   init_code();
   read(t);
   while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    fr(0,n)cin>>arr[i];
    bool b = true;
    sort(arr.begin(),arr.end(),cmp);
    int score = 0;
    fr(0,n){
        if(b){
            score+=arr[i];
            b = false;
        }
        else{
            int diff = arr[i-1]-arr[i];
            if(diff>k){
                score-=arr[i];
                score-=k;
                k=0;
                b = true;
            }
            else{
                score-=arr[i];
                score-=diff;
                k-=diff;
                b =true;
            }
        }
    }
    cout<<score<<endl;
   }
   return 0;
}
