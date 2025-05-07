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
    if (n - 1 > k)
    {
        cout << -1 << '\n';
        return;
    }

    int x = k / (n - 1);
    int extra = k - x * (n - 1);
    // show(x), show(extra);
    int val = x;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        ans.push_back(val);
        val += x;
    }
    int a = ans[n - 1], b = ans[n - 2];
    ans.pop_back();
    int y = x + extra;
    int bar = 10000;
    bool ok = false;
    show(y);
    while (bar--)
    {
        show(b), show(__gcd(a, b));
        if (__gcd(a, b) == y)
        {
            ok = true;
            break;
        }
        b++;
    }
    show(ok);
    if (!ok)
        cout << -1 << '\n';
    else
    {
        ans.push_back(a);
        for (auto x : ans)
            cout << x << ' ';
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