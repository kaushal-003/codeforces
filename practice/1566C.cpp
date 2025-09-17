    #include <atomic>
#include<bits/stdc++.h>
#include <cstring>
    #include <iostream>
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

int dp[100005][2][2];

int findmex(int a, int b){
    if(a==0)return 0;
    if(b==1)return 2;
    return 1;
}
int mex(string&s1,string&s2,int&n,int a0,int a1,int ind){
    if(ind == n-1){
        a1 = (s1[ind]=='1' || s2[ind]=='1')?1:(a1==-1)?0:a1;
        a0 = (s1[ind]=='0' || s2[ind]=='0')?1:(a0==-1)?0:a0;
        if(dp[ind][a0][a1] != -1)return dp[ind][a0][a1];
        return dp[ind][a0][a1] = findmex(a0, a1);
    }
    a1 = (s1[ind]=='1' || s2[ind]=='1')?1:(a1==-1)?0:a1;
    a0 = (s1[ind]=='0' || s2[ind]=='0')?1:(a0==-1)?0:a0;
    if(dp[ind][a0][a1] != -1)return dp[ind][a0][a1];
    int take =  findmex(a0,a1) + mex(s1,s2,n,-1,-1,ind+1);
    int nottake = mex(s1,s2,n,a0,a1,ind+1);
    return dp[ind][a0][a1] = max(take, nottake);

}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        memset(dp,-1,sizeof(dp));
        cout<<mex(s1,s2,n,-1,-1,0)<<endl;
    }
}
