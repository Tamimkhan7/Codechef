#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
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
        int n, x, y;
        cin >> n >> x >> y;
        int a[n];
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            int p = a[i] * x;
            if (p < y)
                ans += p;
            else
                ans += y;
        }
        cout << ans << '\n';
    }
}