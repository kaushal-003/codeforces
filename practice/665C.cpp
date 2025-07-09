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
    // init_code();
    int t;
    t = 1;
    while (t--) {
        string s;
        cin>>s;
        int n = s.size();
        for(int i =1;i<n;i++){
            if(s[i]==s[i-1] && i+1<n){
                int k = s[i+1]-'a';
                k++;
                k%=26;
                s[i] = 'a'+k;
                if(s[i-1]==s[i]){
                    s[i] = 'a'+((k+1)%26);
                }
            }
            else if(s[i]==s[i-1]){
                int k = s[i]-'a';
                k++;
                k%=26;
                s[i] = 'a'+k;
                if(s[i-1]==s[i]){
                    s[i] = 'a'+((k+1)%26);
                }
            }
        }
        cout<<s<<endl;
    }

    return 0;


}
