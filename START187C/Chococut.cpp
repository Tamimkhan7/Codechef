#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int mx = max(n, m);
        int mn = min(n, m);
        int ans = 0;
        for (int i = 0; i <= mx; i++)
        {
            int res = mn * i;
            if (res >= k)
            {
                ans = max(ans, mn * (mx - i));
                break;
            }
        }

        for (int i = 0; i <= mn; i++)
        {
            int res = mx * i;
            if (res >= k)
            {
                ans = max(ans, mx * (mn - i));
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}