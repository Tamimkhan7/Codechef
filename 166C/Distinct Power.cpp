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
        vector<int> v(n), vv(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            vv[i] = v[i];
        }
        sort(all(vv));
        reverse(all(vv));
        map<int, int> mp;
        for (int i = 0; i < n; i++)
            mp[vv[i]] = 1 + i;
        vector<int> base;
        for (int i = 0; i < n; i++)
            base.push_back(mp[v[i]]);
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans++;
            while (i + 1 < n and abs(base[i] - base[i + 1]) == 1)
                i++;

            // show(i);
        }
        cout << ans << '\n';
    }
    return 0;
}