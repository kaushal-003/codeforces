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
#define read(x) ll x; cin >> x // changed to read long long

using namespace std;

ll get_ele(ll& a, ll&b, ll&c, ll&x ){
    return ((x*a)+b)%c;
}

struct AggStack {
    // Each element is stored as (value, current_min)
    stack<pair<ll, ll>> st;
    
    // Push a new number; compute the new or.
    void push(ll x) {
        ll cur = st.empty() ? x : (st.top().second | x);
        st.push({x, cur});
    }
    
    // Pop the top element.
    void pop() {
        st.pop();
    }
    
    // Return the current or.
    ll agg() const {
        return st.top().second;
    }
};

class AggQueue{
    AggStack in, out;
    public:
    void push(ll x){
        in.push(x);
    }
    void pop(){
        if(out.st.empty()){
            while (!in.st.empty()) {
                ll v = in.st.top().first;
                in.pop();
                out.push(v);
            }
        }
        out.st.pop();
    }
    ll query(){
        if (in.st.empty()) return out.agg();
        if (out.st.empty()) return in.agg();
        return (in.agg() | out.agg());
    }
};


int main() {
    AggQueue q;
    int n,k;
    cin>>n>>k;
    ll a,b,c,x;
    cin>>x>>a>>b>>c;
    ll last_ele = x;
    fr(0,k){
        q.push(last_ele);
        // cout<<"appended_ele: "<<last_ele<<endl;
        last_ele = get_ele(a,b,c,last_ele);
    }
    ll ans = 0;
    // cout<<"query: "<<q.query()<<endl;
    ans = ans ^ q.query();
    fr(k,n){
        q.push(last_ele);
        q.pop();
        ans = ans ^ q.query();
        // cout<<"appended_ele: "<<last_ele<<endl;
        // cout<<"query: "<<q.query()<<endl;
        last_ele = get_ele(a,b,c,last_ele);
    }
    cout<<ans<<endl;
    return 0;
}
