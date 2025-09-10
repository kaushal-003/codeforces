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
    string s;
    cin>>s;
    map<char,int>mpp;
    int n = s.size();
    if(n==1){
        char c = (s[0]+1);
        if(c>'z'){
            c = 'a';
        }
        s+=c;
        cout<<s<<endl;
    }
    else{
        bool b = false;
        fr(1,n){ 
            if(s[i]==s[i-1]){
                char c = (s[i]+1);
                if(c>'z'){
                    c = 'a';
                }
                string str = s.substr(0,i);
                str+=c;
                str+=s.substr(i);
                cout<<str<<endl;
                b=true;
                break;
            }
        }
        if(!b){
            char c = (s[n-1]+1);
                if(c>'z'){
                    c = 'a';
                }
            s+=c;
            cout<<s<<endl;
        }
    }
   }
   return 0;
}
