/*
Consider a money system consisting of n coins. 
Each coin has a positive integer value. 
Your task is to calculate the number of distinct ways you can 
produce a money sum x using the available coins.
For example, if the coins are \{2,3,5\} and the desired sum is 9, 
there are 8 ways:

2+2+5
2+5+2
5+2+2
3+3+3
2+2+2+3
2+2+3+2
2+3+2+2
3+2+2+2

Input
The first input line has two integers n and x: 
the number of coins and the desired sum of money.
The second line has n distinct integers c_1,c_2,\dots,c_n: 
the value of each coin.
Output
Print one integer: the number of ways modulo 10^9+7.
Constraints

1 \le n \le 100
1 \le x \le 10^6
1 \le c_i \le 10^6

Example
Input:
3 9
2 3 5

Output:
8
    
    

*/
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL << 60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll, pair<ll, ll>>
#define goog(tno) cout << "Case #" << tno << ": "
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define read(x) \
    int x;      \
    cin >> x
using namespace std;



ll coinCombs(int arr[],int n, int x){

    ll dp[x+1];
    dp[0]=1;
    for(int i=1;i<=x;i++){
        dp[i]=0;
        rep(j,0,n){
            if(arr[j]<=i)dp[i] += dp[i-arr[j]];
        }
        dp[i]=dp[i]%mod;
    }
    return dp[x];
}

int main()
{
      
    int n,x;
    cin>>n>>x;
    int arr[n];
    fr(0,n)cin>>arr[i];
    cout<<coinCombs(arr,n,x);

}
