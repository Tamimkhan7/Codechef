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
    int n, k;
    cin >> n >> k;
    vector<int> v, ans;
    for (int i = 1; i <= n; i++)
        v.push_back(i);
    if (k == 1 || n == 1 || (n % 2 == 1 and k == 2))
    {
        cout << -1 << '\n';
        return;
    }
    if (n % 2 == 0)
    {
        for (int i = 1; i <= n; i += 2)
            cout << i + 1 << ' ' << i << ' ';
        cout << '\n';
    }
    else
    {
        cout << 3 << ' ' << 1 << ' ' << 2 << ' ';
        for (int i = 4; i <= n; i += 2)
            cout << i + 1 << ' ' << i << ' ';
        cout << '\n';
    }
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
