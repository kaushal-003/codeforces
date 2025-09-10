#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL << 60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll, pair<ll, ll>>
#define goog(tno) cout << "Case #" << tno << ": "
#define fast_io                       \ 
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define read(x) \
    int x;      \
    cin >> x
using namespace std;


int main()
{
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<char>v(k);
    map<int,int>mpp;
    fr(0,k){
        char c;
        cin>>c;
        mpp[c]++;
    }
    ll count = 0;
    ll st = 0;
    for(ll i=0;i<n;i++){
        if(mpp.find(s[i])==mpp.end()){
            count += (((i-st)*(i-st+1))/2);
            st = i+1;
        }
    }
    count += (((n-st)*(n-st+1))/2);
    cout<<count<<endl;
    
}
