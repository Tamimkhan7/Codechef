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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int ans = 0;
        for (int x = 1; x <= 100; x++)
        {
            int res = 0;
            for (int i = 0; i < n; i++)
            {
                int a = min(x, v[i]) * 50;
                int b = x * 30;
                res += a - b;
            }
            ans = max(ans, res);
        }
        cout << ans << '\n';
    }
    return 0;
}