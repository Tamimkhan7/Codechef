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
        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            int x = __builtin_popcount(v[i]);
            mp[v[i]] = x;
        }
        // for (auto [x, y] : mp)
        //     cout << x << ' ' << y << '\n';
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == (1 + i))
                continue;
            else if (mp[1 + i] == mp[v[i]])
                continue;
            else
            {
                ok = false;
                break;
            }
        }
        if (ok)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
    return 0;
}