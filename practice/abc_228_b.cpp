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
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define read(x) int x;  cin >> x
using namespace std;


int main()
{
    int n,x;
    vector<int>visited(n,0);
    cin>>n>>x;
    vector<int>arr(n);
    fr(0,n)cin>>arr[i];
    queue<int>q;
    q.push(x-1);
    visited[x-1] = 1;
    int count = 0;
    while(!q.empty()){
        int a = q.front();
        q.pop();
        count++;
        if(!visited[arr[a]-1]){
            visited[arr[a]-1] = 1;
            q.push(arr[a]-1);
        }
    }
    cout<<count<<endl;

}
