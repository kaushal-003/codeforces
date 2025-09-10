/*
Yaroslav is playing a computer game, and at one of the levels, he encountered n
 mushrooms arranged in a row. Each mushroom has its own level of toxicity; the i
-th mushroom from the beginning has a toxicity level of ai
. Yaroslav can choose two integers 1≤l≤r≤n
, and then his character will take turns from left to right to eat mushrooms from this subsegment one by one, i.e., the mushrooms with numbers l,l+1,l+2,…,r
.

The character has a toxicity level g
, initially equal to 0
. The computer game is defined by the number x
 — the maximum toxicity level at any given time. When eating a mushroom with toxicity level k
, the following happens:

The toxicity level of the character is increased by k
.
If g≤x
, the process continues; otherwise, g
 becomes zero and the process continues.
Yaroslav became interested in how many ways there are to choose the values of l
 and r
 such that the final value of g
 is not zero. Help Yaroslav find this number!


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

ll countWays(int n, int x, vector<ll>& arr) {
         ll count = 0;
         ll l = 0;
         ll r =0;
         ll sum = arr[0];
         while(l<n && r<n){
            cout<<l<<" "<<r<<endl;
            if(sum>x && l==r){
               sum-=arr[l];
               l++;
               count++;
               sum+=arr[r];
               r++;
            }
            else if(sum>x){
               sum-=arr[l];
               l++;
               count++;
            }
            else{
               sum+=arr[r];
               r++;
            }
         }
         while(l<n && sum>x){
            sum-=arr[l];
            l++;
            count++;
         }
         
         return count;
      }

int main() {
   init_code();
   int t;
   cin >> t;
   while (t--) {
      int n;
      cin>>n;
      int x;
      cin>>x;
      vector<ll>arr(n);
      fr(0,n) cin>>arr[i];

      ll ways = countWays(n, x, arr);
      cout <<(n*(n+1))/2 - ways << endl;
   }
   
   return 0;
      
      
}




