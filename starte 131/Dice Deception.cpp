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
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        int ans = 0;
        for (int i = 0; i < k; i++)
        {
            int x = abs(7 - a[i]);
            if (x > a[i])
                ans += x;
            else
                ans += a[i];
        }
        for (int i = k; i < n; i++)
            ans += a[i];
        cout << ans << '\n';
    }
}