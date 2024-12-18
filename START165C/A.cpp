#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll int long long

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int ans = INT_MAX;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                int x = 2 * (i + j);
                int y = abs(k - x);
                ans = min(y, ans);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}