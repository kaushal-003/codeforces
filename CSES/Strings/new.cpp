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

class dsu{
    vector<int>rank,parent;
    public:
    dsu(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);
        fr(0,n+1)parent[i] = i;
    }
    int findParent(int n){
        if(parent[n]==n)return n;
        return parent[n] = findParent(parent[n]);
    }
    void mergeSets(int a, int b){
        int p1 = findParent(a);
        int p2 = findParent(b);
        if(p1==p2)return;
        if(rank[p1]>rank[p2]){
            parent[p2] = p1;
        }
        else if(rank[p1]==rank[p2]){
            parent[p2] = p1;
            rank[p1]++;
        }
        else{
            parent[p1] = p2;
        }
    }
    vector<int> getParent(){
        return parent;
    }
};

int main(){
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    int k;
    cin>>k;
    string s,t;
    cin>>s>>t;
    // s and t , n=6 ,k =3
    //aaltnt
    //atltna
    //1 -> 4,5
    // a,t,n
    dsu* d = new dsu(n);
    for(int i = 0;i<n-k;i++){
        d->mergeSets(i,i+k);
        if(i<n-k-1)d->mergeSets(i,i+k+1);
    }
    bool b = true;
    vector<int>arr = d->getParent();
    map<int,vector<int>>mpp;
    fr(0,n){
        mpp[arr[i]].push_back(i);
    }
    for(auto it:mpp){
        int p = it.first;
        vector<int> children = it.second;
        map<char,int>map2;
        for(auto ind:children){
            map2[s[ind]]++;
            map2[t[ind]]--;
        }
        for(auto it:map2){
            if(it.second>0){
                b = false;
                break;
            }
        }
        if(!b)break;
    }
    if(b)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

   }
   return 0;
}
