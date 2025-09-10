
/*
Vova really loves the XOR operation (denoted as ⊕
). Recently, when he was going to sleep, he came up with a fun game.

At the beginning of the game, Vova chooses two binary sequences s
 and t
 of length n
 and gives them to Vanya. A binary sequence is a sequence consisting only of the numbers 0
 and 1
. Vanya can choose integers l,r
 such that 1≤l≤r≤n
, and for all l≤i≤r
 simultaneously replace si
 with si⊕si−l+1
, where si
 is the i
-th element of the sequence s
.

In order for the game to be interesting, there must be a possibility to win. Vanya wins if, with an unlimited number of actions, he can obtain the sequence t
 from the sequence s
. Determine if the game will be interesting for the sequences s
 and t
.


*/
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
    init_code();
    int t;
    cin >> t;
    while (t--) {
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    bool b = false;
    if(s[0]=='1'){
        b= true;
    }
    else{
        int k=0;
        int k2 =0;
        while(t[k]=='0'){
            k++;
        }
        while(s[k2]=='0'){
            k2++;
        }
        if(k2<=k)b=true;
    }
    if (b) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
    return 0;
}



