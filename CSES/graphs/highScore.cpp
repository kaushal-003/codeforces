/*
Given a string, your task is to determine the longest palindromic substring of the string. 
For example, the longest palindrome in aybabtu is bab.
Input
The only input line contains a string of length n. Each character is one of a–z.
Output
Print the longest palindrome in the string. If there are several solutions, you may print any of them.

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

bool isPalindrome(string s, int i, int j){
    while(i<=j){
        if(s[i]!=s[j])return false;
        i++;
        j--;
    }
    return true;
}
string longestPalindrome(string s){
    string str="";
    int n = s.size();
    for(int i=0;i<n;i++){
        int k1=i-1;
        int k2 = i+1;
        while(k1>=0 && k2<n && s[k1]==s[k2]){
            k1--;
            k2++;
        }
        if(str.size()<k2-k1-1) str = s.substr(k1+1,k2-k1-1);
        k1=i-1;
        k2 = i+1;
        while(k1>=0 && k2<n && s[k1]==s[k2]){
            k1--;
            k2++;
        }
        if(str.size()<k2-k1-1) str = s.substr(k1+1,k2-k1-1);
    }
    return str;
}
int main(){
   init_code();
   string s;
   cin>>s;
   cout<<longestPalindrome(s)<<endl;
   
   return 0;
}
