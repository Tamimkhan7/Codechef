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
        double h, x, y1, y2, k;
        cin >> h >> x >> y1 >> y2 >> k;
        int n = ceil(h / x);
        int m = 0;
        if (h / y1 < k)
        {
            m = ceil(h / y1);
        }
        else
        {
            m = k;
            h -= (y1 * k);
            m += ceil((h / y2));
        }
        cout << n << ' ' << m << '\n';
        cout << min(m, n) << '\n';
    }
}
