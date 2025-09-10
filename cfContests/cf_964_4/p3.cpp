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
#define read(x) ll x; cin >> x

using namespace std;

void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

// void computeLPSArray(string& pat, int M, vector<int>& lps)
// {
//     // Length of the previous longest prefix suffix
//     int len = 0;

//     // lps[0] is always 0
//     lps[0] = 0;

//     // loop calculates lps[i] for i = 1 to M-1
//     int i = 1;
//     while (i < M) {
//         if (pat[i] == pat[len]) {
//             len++;
//             lps[i] = len;
//             i++;
//         }
//         else 
//         {
//             if (len != 0) {
//                 len = lps[len - 1];
//             }
//             else
//             {
//                 lps[i] = 0;
//                 i++;
//             }
//         }
//     }
// }

// vector<int> KMPSearch(string& pat, string& txt)
// {
//     int M = pat.length();
//     int N = txt.length();
//     vector<int> lps(M);
//     vector<int> result;
//     computeLPSArray(pat, M, lps);

//     int i = 0;
//     int j = 0; 
//     while ((N - i) >= (M - j)) {
//         if (pat[j] == txt[i] || txt[i]!='?') {
//             j++;
//             i++;
//         }
//         if (j == M) {
//             result.push_back(i - j + 1);
//             j = lps[j - 1];
//         }
//         else if (i < N && pat[j] != txt[i]) {
//             if (j != 0)
//                 j = lps[j - 1];
//             else
//                 i = i + 1;
//         }
//     }
//     return result;
// }

int main(){
   init_code();
   read(t);
   while(t--){
    string s,t;
    cin>>s>>t;
    int n = s.size();
    int m = t.size();
    int i=0;
    int j = 0;
    while(i<n && j<m){
        if(s[i]==t[j]){
            i++;
            j++;
        }
        else if(s[i]=='?'){
            s[i] = t[j];
            i++;
            j++;
        }
        else{
            i++;
        }
    }
    if(j==m){
        cout<<"YES"<<endl;
        fr(0,n){
            if(s[i]!='?'){
                cout<<s[i];
            }
            else cout<<'a';
        }
        cout<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
   }
   return 0;
}
