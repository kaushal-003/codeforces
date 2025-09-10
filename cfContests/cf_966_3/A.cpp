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
        vector<int>v;
        while(n>0){
            v.push_back(n%10);
            n/=10;
        }
        reverse(all(v));
        int k = v.size();
        // fr(0,k)cout<<v[i]<<endl;
        if(k<=2){
            cout<<"NO"<<endl;
        }
        else{
            if(v[0]!=1 || v[1]!=0)cout<<"NO"<<endl;
            else{
                if(k==3 && v[2]<2)cout<<"NO"<<endl;
                else{
                    if(v[2]==0)cout<<"NO"<<endl;
                    else cout<<"YES"<<endl;
                }
            }
        }
    
    }
    return 0;
}