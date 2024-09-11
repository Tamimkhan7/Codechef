#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll int long long

int32_t main()
{
    MTK;
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int ans = max(a, b) + max(c, d) + max(e, f);
    cout << ans << '\n';
    return 0;
}