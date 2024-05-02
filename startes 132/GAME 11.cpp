#include <bits/stdc++.h>
using namespace std;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define ll int long long
const int N = 1e5 + 9;
int v[N], vv[N];
void solve()
{
    int n, m;
    cin >> n >> m;
    if (n < 4 || m < 4)
    {
        cout << -1 << '\n';
        return;
    }
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < m; i++)
        cin >> vv[i];

    sort(v + 1, v + n + 1);
    reverse(v + 1, v + n + 1);
    sort(vv + 1, vv + m + 1);
    reverse(vv + 1, vv + m + 1);

    ll ans = 0;
    int l = 1, r = 1;
    for (int i = 1; i <= 4; i++)
        ans += v[l++];

    for (int i = 1; i <= 4; i++)
        ans += vv[r++];

    int cnt = 0;
    while (cnt < 3 && l <= n && r <= m)
    {
        if (v[l] >= vv[r])
            ans += v[l++];
        else
            ans += vv[r++];
        cnt++;
    }
    while (cnt < 3 && l <= n)
    {
        ans += v[l++];
        cnt++;
    }
    while (cnt < 3 && r <= m)
    {
        ans += vv[r++];
        cnt++;
    }
    cout << ans << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
