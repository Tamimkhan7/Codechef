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
        int a[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cin >> a[i][j];
        }
        int l = 1, r = 10000, ans;

        while (l <= r)
        {
            int first;
            int mid = (l + r) / 2;
            vector<int> v;
            for (int i = 0; i < n; i++)
            {
                int sum = 0;
                for (int j = 0; j < n; j++)
                    sum += min(a[i][j], mid);

                if (i == 0)
                {
                    first = sum;
                    continue;
                }
                v.push_back(sum);
            }
            int cnt = 0;
            for (auto x : v)
            {
                if (first <= x)
                    cnt++;
            }
            if (cnt == 1)
            {
                ans = mid;
                r = mid - 1;
            }
            else if (cnt > 1)
                l = mid + 1;
            else
                r = mid - 1;
        }
        cout << ans << '\n';
    }

    return 0;
}