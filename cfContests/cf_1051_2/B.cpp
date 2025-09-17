#include <bits/stdc++.h>
#include <cinttypes>
#include <unistd.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(ll i = a; i < b; i++)
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

bool cmp(int a,int b){
    return a>b;
}
int main(){
    int t;
    cin>>t;

    while(t--){
       int n,k;
       cin>>n>>k;
       vector<int>arr(n);
       for(int i = 0;i<n;i++){
           cin>>arr[i];
       }
       vector<int>b(k);
       fr(0,k){
           cin>>b[i];
       }
       sort(b.begin(),b.end());
       ll sum = 0;
       // while(c--){
       //     sum+=arr[x];
       //     arr.pop_back();
       //     x--;
       //     ind2++;
       // }
       //need max heap
       priority_queue<int>pq;
       for(int i = 0;i<n;i++){
           pq.push(arr[i]);
       }
       for(int i = 0;i<k;i++){
           int pop_ele = b[i]-1;
           while(pq.size()>0 && pop_ele>0){
               sum+=pq.top();
               pq.pop();
               pop_ele--;
           }
           if(!pq.empty())pq.pop();
       }
       while(pq.size()>0){
           sum+=pq.top();
           pq.pop();
       }
       cout<<sum<<endl;
    }
    return 0;
}
