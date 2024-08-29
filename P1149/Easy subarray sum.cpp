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
        int n;
        cin >> n;
        int a[n + 1];
        int cnt = 0, pos = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if (a[i] < 0)
                cnt++;
            else if (a[i] > 0)
                pos++;
        }
        // int maxsum = 0, ans = 0;
        // for (int i = 1; i <= n; i++)
        // {
        //     maxsum = max(a[i], a[i] + maxsum);
        //     ans = max(ans, maxsum);
        // }
        if (pos > 0)
            cout << cnt << '\n';
        else
            cout << 0 << '\n';
    }

    return 0;
}