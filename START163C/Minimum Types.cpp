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
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        for (int i = 0; i < n; i++)
            a[i] *= b[i];

        sort(all(a));
        reverse(all(a));
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (k > 0)
            {
                k -= a[i];
                cnt++;
            }
        }
        if (k <= 0)
            cout << cnt << '\n';
        else
            cout << -1 << '\n';
    }
    return 0;
}