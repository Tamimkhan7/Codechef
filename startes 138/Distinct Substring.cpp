#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007
void solve()
{
    int n, k;
    cin >> n >> k;
    // if (n == 1 and k == 1)
    // {
    //     cout << "YES" << '\n';
    //     return;
    // }
    // if (n == 1 and k > 1)
    // {
    //     cout << "NO" << '\n';
    //     return;
    // }
    int x = 1;
    string ans = "";
    while (n--)
    {
        ans += '1';
        for (int i = 1; i <= x; i++)
            ans += '0';

        n -= x;
        x++;
        if (x > n)
        {
            x--;
            break;
        }
    }
    // cout << ans << '\n';
    if (x >= k)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
