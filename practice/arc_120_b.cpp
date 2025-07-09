#include<bits/stdc++.h>
#include <ios>
#define ll long long
#define pb push_back
#define mod2 998244353
#define fr(a,b) for(int i = a; i < b; i++)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x
using namespace std;

ll pow(ll a, ll b){
    ll res = 1;
    while(b>0){
        if(b&1){
            res = (res*a)%mod2;
        }
        a = (a*a)%mod2;
        b>>=1;
    }
    return res;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<string>v(n);
    fr(0,n){
        cin>>v[i];
    }
    ll ans = 1;
    fr(0,n){
        int si = i;
        int sj = 0;
        ll temp = 0;
        ll tempans = 1;
        char c = '.';
        while(si>=0 && sj<m){
            if(v[si][sj]=='B'){
                if(c=='.' || c=='B'){
                    c = 'B';
                }
                else{
                    tempans = 0;
                    break;
                }
            }
            else if(v[si][sj]=='R'){
                if(c=='.' || c=='R'){
                    c = 'R';
                }
                else{
                    tempans = 0;
                    break;
                }
            }
            else{
                temp++;
            }
            sj++;
            si--;
        }
        if(c=='.'){
            tempans = (tempans*(ll)2)%mod2;
        }
        ans = (ans*tempans)%mod2;
    }
    fr(1,m){
        int si = n-1;
        int sj = i;
        ll temp = 0;
        ll tempans = 1;
        char c = '.';
        while(si>=0 && sj<m){
            if(v[si][sj]=='B'){
                if(c=='.' || c=='B'){
                    c = 'B';
                }
                else{
                    tempans = 0;
                    break;
                }
            }
            else if(v[si][sj]=='R'){
                if(c=='.' || c=='R'){
                    c = 'R';
                }
                else{
                    tempans = 0;
                    break;
                }
            }
            else{
                temp++;
            }
            sj++;
            si--;
        }
        if(c=='.'){
            tempans = (tempans*(ll)2)%mod2;
        }
        ans = (ans*tempans)%mod2;
    }
    cout<<ans<<endl;

    return 0;
}
