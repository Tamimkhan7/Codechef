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
        vector<int> v(n + 2);
        for (int i = 1; i <= n; i++)
            cin >> v[i];
        int cnt = 0;
        for (int i = 1; i <= min(n, 100); i++)
        {
            for (int j = 1; j <= min(n, 100); j++)
            {
                for (int k = 1; k <= min(n, 100); k++)
                {
                    if (abs(v[i] - v[k]) == (abs(i - j) + abs(j - k)))
                        cnt++;
                }
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}