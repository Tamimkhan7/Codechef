#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
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
        int n, d;
        cin >> n >> d;
        int a[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        int ans = 0;
        int big = 0, small = 1;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] <= d and small == 1)
                continue;
            else if (a[i] > d and big == 1)
                continue;
            else
            {
                if (big == 0 and small == 1)
                    big = 1, small = 0;
                else
                    small = 1, big = 0;
                // cout << ans << ' ' << a[i] << '\n';
                ans++;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}