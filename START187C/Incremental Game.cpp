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
        int x, y, k;
        cin >> x >> y >> k;
        int mx = max(x, y);
        int mn = min(x, y);
        int val = 0;
        if (mx >= k)
            mx -= k, val = k;
        else
        {
            val = mx;
            mx = 0;
        }
        mx = max(mn, mx);
        if (mx > val)
            cout << "Bob\n";
        else
            cout << "Alice\n";
    }
    return 0;
}