#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
void solve()
{
    int x, y;
    cin >> x >> y;
    if (x <= y)
    {
        cout << 1 << '\n';
    }
    else
    {
        int ans = -2 * y;
        if (abs(ans) > x)
            cout << 1 << '\n';
        else
        {
            cout << x + ans << '\n';
        }
    }
}
int32_t main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
        solve();
}