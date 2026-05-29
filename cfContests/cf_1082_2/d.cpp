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
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>arr(n);
        fr(0,n)cin>>arr[i];
        map<int,int>mpp;
        bool b = 1;
        fr(0,n){
            mpp[arr[i]]++;
        }
        for(auto it:mpp){
            if(it.second%it.first!=0){
                b = 0;
                break;
            }
        }
        if(!b)cout<<-1<<endl;
        else{
            int cc = 1;
            map<int,vector<int>>mp;
            for(auto it:mpp){
                int k = it.second/it.first;
                fr(0,k){
                    // cout<<"hi"<<endl;
                    mp[it.first].push_back(cc);
                    cc++;
                }
            }
            // for (auto it:mp){
            //     cout<<it.first<<endl;
            //     for(auto x:it.second){
            //         cout<<x<<" ";
            //     }
            //     cout<<endl;
            // }
            map<int,int>count;
            for(auto it:mp){
                count[it.first] = 0;
            }
            fr(0,n){
                int x = arr[i];
                int it = mp[x].back();
                cout<<it<<" ";
                count[x]++;
                if(count[x]==x){
                    count[x] = 0;
                    mp[x].pop_back();
                }
            }
            cout<<endl;
        }
    }


    return 0;


}
