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
    int a, b;
    cin >> a >> b;
    int ans = 0;
    int x = max(a, b);
    int y = min(a, b);
    // cout << x << ' ' << y << '\n';
    if (x >= y * 2)
    {
        cout << 0 << '\n';
        return;
    }
    int p = x / 2;
    cout << y - p << '\n';
    // cout << ans << '\n';
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