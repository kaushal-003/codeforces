#include<bits/stdc++.h>
#include<unordered_map>
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

struct pair_hash {
    template <class T1, class T2>
    std::size_t operator () (const std::pair<T1, T2>& p) const {
        auto h1 = std::hash<T1>{}(p.first);
        auto h2 = std::hash<T2>{}(p.second);
        return h1 ^ h2;
    }
};

void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

int main() {
   init_code();
   int t;
   cin >> t;
   while (t--) {
        int m,n;
        cin>>n>>m;
        vector<int>v(n,0);
        unordered_map<pair<int,int>,int, pair_hash> map; // Use custom hash function
        for(int i=0;i<m;i++){
            int a,b;
            cin>>a>>b;
            pair<int,int>p={a,b};
            map[p]=0;
        }
        int q;
        cin>>q;
        int k=0;
        vector<int>q1(q);
        for(int i=0;i<q;i++){
         cin>>q1[i];
        }
        bool a=false;
        for(int i=0;i<q;i++){
            int query = q1[i];
            k++;
            for(auto& e : map){
               if(query >= e.first.first && query <= e.first.second){
                  e.second++;
                  if(e.second > ((e.first.second - e.first.first + 1) / 2)){
                     a=true;
                     break;
                  }
               }
            }
            if(a) break;
        }
        if(!a) cout << -1 << endl;
        else cout << k << endl;
   }
   return 0;
}
