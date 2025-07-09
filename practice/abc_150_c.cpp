#include<bits/stdc++.h>
#include <ios>
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

int fac(int n){
    int ans = 1;
    for(int i = 2; i <= n; i++){
        ans = (ans*i);
    }
    return ans;
}


ll bs(ll n){
    ll low = 0;
    ll high = 1e10+200;
    ll ans = 0;
    while(low<=high){
        ll mid = (low)+((high-low)/2);
        ll a = (mid*(mid+1))/2;
        if (a>n){
            high = mid-1;
        }
        else{
            ans = mid;
            low = mid+1;
        }
    }
    return ans;
}

int main(){
    int t;
    t = 1;
    while (t--) {
        ll n;
        cin>>n;
        vector<int>a1(n),a2(n);
        fr(0,n){
            cin>>a1[i];
        }
        fr(0,n){
            cin>>a2[i];
        }
        set<int>s1,s2;
        int ans1=0,ans2=0;
        fr(1,n+1){
            s1.insert(i);
            s2.insert(i);
        }
        fr(0,n){
            int a = a1[i];
            int c = 0;
            for(auto it:s1){
                if(it<a){
                    c++;
                }
                else{
                    break;
                }
            }
            s1.erase(a);
            ans1 += c*fac(n-1-i);
        }
        //same for ans2
        fr(0,n){
            int a = a2[i];
            int c = 0;
            for(auto it:s2){
                if(it<a){
                    c++;
                }
                else{
                    break;
                }
            }
            ans2 += c*fac(n-1-i);
            s2.erase(a);
        }
        cout<<abs(ans1-ans2)<<endl;
    }

    return 0;
}
