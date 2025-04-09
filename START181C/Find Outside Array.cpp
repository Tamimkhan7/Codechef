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
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        if (n == 1)
        {
            int x = v[0];
            v.push_back(x);
            mp[x]++;
        }

        sort(all(v));
        int limit = min(n, 100LL);
        bool ok = false;

        for (int i = 0; i < limit and !ok; ++i)
        {
            for (int j = 0; j < limit and !ok; ++j)
            {
                int sum = v[i] + v[n - 1 - j];
                if (!mp.count(sum))
                {
                    cout << v[i] << " " << v[n - 1 - j] << '\n';
                    ok = true;
                }
            }
        }

        if (!ok)
            cout << -1 << '\n';
    }
    return 0;
}