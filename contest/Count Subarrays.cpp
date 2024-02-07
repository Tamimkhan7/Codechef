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
const int N = 1e+7;
ll px[N];
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a, a + n + 1);
        px[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            px[i] = a[i] + px[i - 1];
        }
        if (px[1] == 1)
            cout << 1 << ' ';
        for (int i = 2; i <= n; i++)
        {
            ll x = px[i] - a[i - 1];
            // cout << x << ' ';
            if (x == i)
                cout << 1 << ' ';
        }
        cout << '\n';
    }
}