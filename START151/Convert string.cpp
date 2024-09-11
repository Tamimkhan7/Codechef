#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int zero = 0, one = 0;
    for (auto x : s)
    {
        if (x == '1')
            one++;
        else
            zero++;
    }
    // cout << one << ' ' << zero << '\n';
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i == one || i == zero)
        {
            cnt++;
            continue;
        }
        int x = i - (one - 1);
        int y = i - (zero - 1);
        if (x % 2 == 1 || y % 2 == 1)
            cnt++;
    }
    cout << cnt << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}