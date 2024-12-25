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
        vector<int> v(n + 1);
        map<int, int> mp;
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            mp[v[i]] = i;
        }
        ll ans = 0;
        for (auto [x, y] : mp)
            ans += y;
        cout << ans << '\n';
    }
    return 0;
}