#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void solve()
{
    int d, x, y;
    cin >> d >> x >> y;

    if (y >= x)
    {
        cout << 0 << '\n';
        return;
    }

    for (int i = 1; i <= y; i++)
    {
        int dis = x * (100 - i * d);
        dis = (dis + 99) / 100;

        if (y - i >= dis)
        {
            cout << i << '\n';
            return;
        }
    }

    cout << -1 << '\n';
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
