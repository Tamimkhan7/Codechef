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

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int one = 0, zero = 0;
    for (auto c : s)
    {
        if (c == '1')
            one++;
        else
            zero++;
    }
    if (n == one and one % 2 == 0)
    {
        cout << 0 << '\n';
        return;
    }
    if (one == n and one % 2 != 0)
    {
        cout << 1 << '\n';
        return;
    }
    if (zero == n)
    {
        cout << n << '\n';
        return;
    }
    int ones = 0, zeros = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            ones++;
        else
            zeros++;
        if (ones % 2 != 0)
        {
            zero -= zeros;
            zeros = 0;
        }
        else
        {
            one -= ones;
            ones = 0;
        }
    }
    if (one % 2 == 0)
        cout << 0 << '\n';
    else
        cout << 1 << '\n';
    // cout << one << ' ' << zero << '\n';
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