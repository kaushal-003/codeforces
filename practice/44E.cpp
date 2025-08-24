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

int dp[201][201][201];
bool helper(string& s, int& a, int& b, int& k,int prev, int curr, int parts,int& n,vector<string>&arr){
    if(parts>k)return false;
    if(curr==n){
        if(parts==k && prev==n){
            return dp[prev][curr][parts] = 1;
        }
        return dp[prev][curr][parts] = 0;
    }

    if(dp[prev][curr][parts]!=-1)return dp[prev][curr][parts];
    int len = curr-prev+1;
    if(len>=a && len<=b){
        bool nottake = helper(s,a,b,k,prev,curr+1,parts,n,arr);
        if(nottake)return dp[prev][curr][parts] = true;
        bool take = helper(s,a,b,k,curr+1,curr+1,parts+1,n,arr);
        if(take){
            arr.push_back(s.substr(prev,len));
            return dp[prev][curr][parts] = true;
        }
        return dp[prev][curr][parts] = false;
    }
    else if(len<=a){
        bool nottake = helper(s,a,b,k,prev,curr+1,parts,n,arr);
        return dp[prev][curr][parts] = nottake;
    }
    return dp[prev][curr][parts] = false;

}

int main() {
    int t=1;
    while (t--) {
        int k,a,b;
        cin>>k>>a>>b;
        string s;
        cin>>s;
        int n = s.size();
        vector<string>arr;
        fr(0,201){
            rep(j,0,201){
                rep(k,0,201){
                    dp[i][j][k]=-1;
                }
            }
        }
        bool ans = helper(s,a,b,k,0,0,0,n,arr);
        reverse(all(arr));
        if(ans){
            for(auto str:arr){
                cout<<str<<endl;
            }
        }
        else{
            cout<<"No solution"<<endl;
        }
    }


    return 0;


}
