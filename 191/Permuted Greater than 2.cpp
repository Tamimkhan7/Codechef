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

void solve()
{
    int x, y, z;
    cin >> x >> y >> z;

    int sum = y + (z * 2);
    int cnt = x + y + z;
    if (cnt % 2 != 0)
    {
        if ((z * 2) >= (cnt - 1))
        {
            cout << "Yes\n";
            return;
        }
    }
    if (sum >= cnt)
    {
        cout << "Yes\n";
        return;
    }

    cout << "No\n";
}
int32_t main()
{
    MTK;

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}