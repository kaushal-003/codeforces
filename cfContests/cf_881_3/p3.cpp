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
#define fast_io                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define read(x) int x; \
    cin >> x
using namespace std;
void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
vector<int> convertToVector(ll num)
{
    vector<int> digits;
    while (num > 0)
    {
        digits.pb(num % 10);
        num /= 10;
    }
      return digits;
}

vector<int> addVectors(vector<int>& v1, vector<int>& v2) {
    int carry = 0;
    int n = max(v1.size(), v2.size());
    vector<int> result;
    for (int i=0;i<n;i++) {
        int sum = carry;
        if (i < v1.size())
            sum += v1[i];
        if (i < v2.size())
            sum += v2[i];
        result.push_back(sum % 10);
        carry = sum / 10;
    }
    while (carry > 0) {
        result.push_back(carry % 10);
        carry /= 10;
    }
    return result;
}

int main()
{
    fast_io;
    init_code();
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll num = n;
        vector<int> sum;
        while (num > 0)
        {
            vector<int> digits = convertToVector(num);
            sum = addVectors(sum, digits);
            num =num/ 2;
        }
        for(int i=sum.size()-1;i>=0;i--)cout << sum[i];
        cout << endl;
    }
    return 0;
}
