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
        if(n%2==0){
            cout<<-1<<endl;
        }
        else{
            int k = n-1;
            fr(1,k/2+1)cout<<i<<" ";
            for(int i=n;i>k/2;i--)cout<<i<<" ";
            cout<<endl;
        }
    
    }
    return 0;
}