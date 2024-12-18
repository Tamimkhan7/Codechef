#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define int int long long
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

        reverse(all(v));

        int ans = 0;
        int cnt = 0, x = v[0];
        for (int i = 0; i < n; i++)
        {
            if (v[i] < x)
                cnt++;
            else
            {
                ans = max(ans, cnt);
                cnt = 0;
                x = v[i];
            }
        }
        ans = max(ans, cnt);
        cout << ans << '\n';
    }
    return 0;
}