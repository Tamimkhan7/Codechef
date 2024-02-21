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
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, l, x, y;
        cin >> n >> m >> x >> y >> l;
        int left = (y - 1) / l;
        int right = (m - y) / l;
        int up = (x - 1) / l;
        int down = (n - x) / l;
        if (l == 1)
            cout << (1LL * n * m) << '\n';
        else
        {
            ll r = (up + down) + 1;
            ll c = (left + right) + 1;
            cout << r * c << '\n';
        }
    }
}