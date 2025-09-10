#include<bits/stdc++.h>
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
#define read(x) int x; cin >> x
using namespace std;
 
void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}


int main() {
   init_code();
   int temp=1;
    int num;
    cin>>num;
    int bits=1;
    while(temp<odenum){
        temp=temp<<1;
        bits++;
    }
    // if(temp>num)
    // bits--;
    int k1=1;
    int k2=pow(2,bits)-1;
    int prod=1;
    int a1=1;
    int a2=1;
    while(k1<=k2){
        if((k1^k2)==num){
            if(prod<=k1*k2){
                a1=k1;
                a2=k2;
            }
        }
        k1++;
        k2--;
    }
    cout<<a1<<" "<<a2<<endl;
    
    return 0;

  
        
        

}