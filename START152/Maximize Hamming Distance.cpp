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
        int n, m;
        cin >> n >> m;
        vector<string> v(m);
        for (int i = 0; i < m; ++i)
            cin >> v[i];

        ll ans = 0;

        for (int c = 0; c < n; ++c)
        {
            int cnt0 = 0, cnt1 = 0, cntq = 0;
            for (int r = 0; r < m; ++r)
            {
                if (v[r][c] == '0')
                    cnt0++;
                else if (v[r][c] == '1')
                    cnt1++;
                else
                    cntq++;
            }

            int half = m / 2;

            if (cnt0 + cntq <= half)
                cnt0 += cntq;
            else if (cnt1 + cntq <= half)
                cnt1 += cntq;
            else
            {
                cnt0 = half;
                cnt1 = m - half;
            }
            ans += 1LL * cnt0 * cnt1;
        }
        cout << ans << '\n';
    }
    return 0;
}