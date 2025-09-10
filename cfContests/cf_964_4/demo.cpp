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
    int a1,a2,b1,b2;
    cin>>a1>>a2>>b1>>b2;
    vector<int>a={a1,a2};
    vector<int>reva = {a2,a1};
    vector<int>revb = {b2,b1};
    vector<int>b = {b1,b2};
    vector<vector<int>> pera = {a,reva};
    vector<vector<int>> perb = {b,revb};
    int c =0;
    fr(0,2){
        rep(j,0,2){
            vector<int>temp1 = pera[i];
            vector<int>temp2 = perb[j];
            // cout<<temp1[0]<<" "<<temp1[1]<<endl;
            // cout<<temp2[0]<<" "<<temp2[1]<<endl;
            int g1=0;
            int g2=0;
            if(temp1[0]>temp2[0])g1++;
            if(temp1[0]<temp2[0])g2++;
            if(temp1[1]>temp2[1])g1++;
            if(temp1[1]<temp2[1])g2++;
            if(g1>g2)c++;
        }
    }
    cout<<c<<endl;  
    
   }
   return 0;
}
