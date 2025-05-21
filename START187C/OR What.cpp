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
        int n, x;
        cin >> n >> x;

        vector<bool> vis(n + 1, false);
        vector<int> P(n + 1);

        for (int i = 1; i <= n; ++i)
        {
            int car = x ^ i;
            if (car >= 1 and car <= n and !vis[car] and ((car | i) == x))
            {
                P[i] = car;
                vis[car] = true;
            }
        }

        int cur = 1;
        for (int i = 1; i <= n; ++i)
        {
            if (P[i] == 0)
            {
                while (vis[cur])
                    ++cur;
                P[i] = cur;
                vis[cur] = true;
            }
            cout << P[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}