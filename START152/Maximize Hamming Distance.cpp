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
    int T;
    cin >> T;

    while (T--)
    {
        int N, M;
        cin >> N >> M;
        vector<string> v(M);
        for (int i = 0; i < M; i++)
            cin >> v[i];

        ll ans = 0;

        for (int col = 0; col < N; col++)
        {
            int cnt0 = 0, cnt1 = 0, cnt = 0;
            for (int row = 0; row < M; row++)
            {
                if (v[row][col] == '0')
                    cnt0++;
                else if (v[row][col] == '1')
                    cnt1++;
                else
                    cnt++;
            }
            // cout << cnt0 << ' ' << cnt1 << ' ' << cnt << '\n';
            ll mx = max(cnt1, cnt0);
            if (mx == 0 and cnt != 0)
            {
                ll x = cnt / 2;
                ll y = (cnt / 2) + (cnt % 2);
                ans += x * y;
            }
            else
                ans += (cnt1 * cnt0) + (mx * cnt);
        }

        cout << ans << '\n';
    }
    return 0;
}