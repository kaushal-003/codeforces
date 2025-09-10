/*
A border of a string is a prefix that is also a suffix of the string but not the whole string. For example, the borders of abcababcab are ab and abcab.
Your task is to find all border lengths of a given string.
Input
The only input line has a string of length n consisting of characters a–z.
Output
Print all border lengths of the string in increasing order.
Constraints

1 \le n \le 10^6
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

#include <bits/stdc++.h>
using namespace std;

const ll R = 9973, MOD = 99999989;

string S;
ll H[1000005], P = 1;
 



int main(){
   init_code();
   cin >> S;
	for (int i = 0; i < S.size(); i++) 
		H[i] = ((i == 0 ? 0 : H[i - 1]) * R + (ll)S[i]) % MOD;
 
	for (int k = 1; k < (int)S.size(); k++) {
		P = (P * R) % MOD;
		ll suf = (H[S.size() - 1] - (P * H[S.size() - k - 1]) % MOD + MOD) % MOD;
		if (H[k - 1] == suf)
			cout << k << ' ';
	}
	cout << '\n';
   
   return 0;
}
