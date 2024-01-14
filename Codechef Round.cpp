#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007
void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    int ans = 0;
    if (y >= 3)
    {
        ans += min(x, y / 3);
        x -= min(x, y / 3);
    }

    ans += x / 2;
    if (ans >= n)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}