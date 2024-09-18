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
        int m, p;
        cin >> m >> p;
        int x = 299 - m;
        if (x == 0)
            cout << 0 << '\n';
        else
        {
            int ans, cnt = 0, pp = m;
            while (x >= cnt)
            {
                cnt++;
                ans = p + (cnt * 20) + (cnt + m);
                if (ans > 1000)
                    break;
            }
            cout << --cnt << '\n';
        }
    }

    return 0;
}