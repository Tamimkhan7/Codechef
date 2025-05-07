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
        int n, h;
        cin >> n >> h;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            v.push_back({b, a});
        }
        sort(all(v));
        reverse(all(v));
        int first_one_val = -1, first_val = v[0].first, first_sec = v[0].second;

        for (auto [x, y] : v)
        {
            if (y == 1)
            {
                first_one_val = x;
                break;
            }
        }
        

        int val = 1e18 + 9;
        if (first_one_val != -1)
            val = (h % first_one_val == 0 ? h / first_one_val : h / first_one_val + 1);
        int ans;
        int x = h / first_val;
        if (x * first_val >= h)
            ans = x * first_sec;
        else if ((x * first_val) + first_one_val >= h and first_one_val != -1)
            ans = x * first_sec + 1;
        else
            ans = x * first_sec + first_sec;

        cout << min(ans, val) << '\n';
    }
    return 0;
}
