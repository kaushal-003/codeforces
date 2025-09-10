/*
Your task is to calculate the number of strings of length n having a given pattern of length m as their substring. All strings consist of characters A–Z.
Input
The first input line has an integer n: the length of the final string.
The second line has a pattern of length m.
Output
Print the number of strings modulo 10^9+7.
Constraints

1 \le n \le 1000
1 \le m \le 100
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


int main(){
   init_code();
   ll n;
   cin>>n;
   string s;
   cin>>s;
   ll m = s.size();
   ll k = (n-m+1);
   ll k2 = (n-m);
   while(k2){
        k = (k*26)%mod;
        k2--;
   }
   cout<<k%mod<<endl;
   return 0;
}
