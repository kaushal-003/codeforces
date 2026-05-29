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

bool checkCol(vector<vector<bool>>&placed, int row, int col){
   for(int i = 0;i<row;i++){
      if(placed[i][col])return false;
   }
   return true;
}

bool checkDiag(vector<vector<bool>>&placed, int row, int col, int& boardSize){
   int rl = row-1;
   int cl = col-1;
   while(rl>=0 && cl>=0){
      if(placed[rl][cl])return false;
      rl--;
      cl--;
   }
   int rr = row-1;
   int cr = col+1;
   while(rr>=0 && cr<boardSize){
      if(placed[rr][cr])return false;
      rr--;
      cr++;
   }
   return true;
}
int backtrace(vector<vector<char>>&board, int i,int& boardSize,vector<vector<bool>>&placed){
   if(i==boardSize)return 1;
   int ans = 0;
   rep(t,0,boardSize){
      if(checkCol(placed,i,t)& checkDiag(placed,i,t,boardSize)& (board[i][t]=='.')){
         placed[i][t] = true;
         ans += backtrace(board,i+1,boardSize,placed);
         placed[i][t] = false; 
      }
   }
   return ans;
}

int main() {
   // init_code();
   int boardSize = 8;
   vector<vector<char>>board(boardSize,vector<char>(boardSize,'.'));
   fr(0,boardSize){
      rep(j,0,boardSize)cin>>board[i][j];
   }
   vector<vector<bool>>placed(boardSize,vector<bool>(boardSize,false));
   cout<<backtrace(board,0,boardSize,placed)<<endl;
   return 0;
}