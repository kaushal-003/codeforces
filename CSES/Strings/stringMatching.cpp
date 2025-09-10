/*
Given a string and a pattern, your task is to count the number of positions where the pattern occurs in the string.
Input
The first input line has a string of length n, and the second input line has a pattern of length m. Both of them consist of characters a–z.
Output
Print one integer: the number of occurrences.

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


vector<int> kmp(string& s){
    vector<int>a;
    string s1 = s;
    int n = s1.size();
    vector<int>lps(n,0);
    // cout<<s1<<endl;
    for(int i=1;i<n;i++){
        int prev_ind = lps[i-1];
        while(prev_ind>0 && (s1[i]!=s1[prev_ind] || s[i]!='?')){
            prev_ind = lps[prev_ind-1];
        }
        // cout<<s1[i]<<" "<<s1[prev_ind]<<endl;

        lps[i] = prev_ind ;
        // cout<<s1[i]<<" "<<s1[prev_ind]<<" "<<lps[i]<<endl;

        if (s1[i]==s1[prev_ind])lps[i]++;
    }
    ll count=0;
    fr(0,n){
        // cout<<lps[i]<<" ";
        if(lps[i]>0 && lps[i]==i-1) a.push_back(i+1);
    }
    // cout<<endl;
    return a;
}

int main(){
   init_code();
   string s1;
   cin>>s1;
  vector<int>a = kmp(s1);
  fr(0,a.size()){
    cout<<a[i]<<" ";
  }
  cout<<endl;

   return 0;
}
