/*
Time limit: 1.00 s
Memory limit: 512 MB
Your task is to find a minimum-price flight route from Syrjälä to Metsälä.
 You have one discount coupon, using which you can halve the price of any single 
 flight during the route. However, you can only use the coupon once.
When you use the discount coupon for a flight whose price is x, 
its price becomes \lfloor x/2 \rfloor (it is rounded down to an integer).
Input
The first input line has two integers n and m: the number of cities and 
flight connections. The cities are numbered 1,2,\ldots,n. City 1 is Syrjälä, 
and city n is Metsälä.
After this there are m lines describing the flights. Each line has three 
integers a, b, and c: a flight begins at city a, ends at city b, and its price is c. 
Each flight is unidirectional.
You can assume that it is always possible to get from Syrjälä to Metsälä.
Output
Print one integer: the price of the cheapest route from Syrjälä to Metsälä.
*/

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


void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}


vector <ll> dijkstra(int V, vector<vector<ll>> adj[], int S)
    {
        priority_queue<triplet,vector<triplet>,greater<triplet>>pq;
        vector<ll> dist(V, LONG_LONG_MAX); 
        
        pq.push({0,{1,0}}); 
        dist[S] = 0;
        while(!pq.empty()) {
            auto it = pq.top();
            pq.pop();
            ll node = it.second.second;
            ll isDiscountAvailable = it.second.first; 
            ll dis = it.first; 
            for(auto it : adj[node]) {
                ll adjNode = it[0]; 
                ll edgW = it[1]; 
                
                if(dis + edgW < dist[adjNode]) {
                    dist[adjNode] = dis + edgW;
                    pq.push({dis+edgW,{isDiscountAvailable,adjNode}});  
                }
                if(dis + edgW/2 < dist[adjNode] && isDiscountAvailable) {
                    dist[adjNode] = dis + edgW/2;
                    pq.push({dis+edgW/2,{0,adjNode}});  
                }
            }
        }
        return dist; 
    }


int main(){
   init_code();
   read(n);
   read(m);
    vector<vector<ll>> adj_list[n];
   fr(0,m){
    int a,b,c;
    cin>>a>>b>>c;
    adj_list[a-1].push_back({b-1,c});
    adj_list[b-1].push_back({a-1,c});
   }
   vector<ll> ans  = dijkstra(n,adj_list,0);
   fr(0,n)cout<<ans[i]<<" ";
   cout<<ans[n-1]<<endl;
   return 0;
}
