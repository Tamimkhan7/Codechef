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
        if (n % 2 != 0)
        {
            cout << n / 2 + 1 << '\n';
            continue;
        }

        int ans = n / 2;
        // show(ans);
        for (int i = n; i >= 1; i -= 2)
        {
            int x = i / 2;
            // show(x);
            if (x % 2 != 0)
            {
                ans += x / 2 + 1;
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}