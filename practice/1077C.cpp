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



int main() {
    // init_code();
    int t;
    t = 1;
    while (t--) {
        int n;
        cin>>n;
        vector<ll>arr(n);
        map<ll,ll>mp;
        vector<ll>ans;
        ll sum = 0;
        fr(0,n){
            cin>>arr[i];
            mp[arr[i]]++;
            sum+=arr[i];
        }
        fr(0,n){
            sum-=arr[i];
            int k = arr[i];
            mp[k]--;
            if(mp[k]==0){
                mp.erase(k);
            }
            if(sum%2==1){
                sum+=arr[i];
                mp[k]++;
                continue;
            }
            if(mp.find(sum/2)==mp.end()){
                sum+=arr[i];
                mp[k]++;
                continue;
            }
            else{
                ans.pb(i+1);
                mp[k]++;
                sum+=arr[i];
            }
        }
        if(ans.size()==0)cout<<0<<" ";
        else{
            cout<<ans.size()<<endl;
            fr(0,ans.size()){
                cout<<ans[i]<<" ";
            }
        }
        cout<<endl;

    }

    return 0;


}
