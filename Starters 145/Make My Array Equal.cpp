#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007
bool is_equal(vector<int> &v)
{
    int n = v.size();
    int ans = 0;
    int x = v[0];
    // ans = count(v.begin() + 1, v.end(), x);
    for (auto xx : v)
    {
        if (x == xx)
            ans++;
    }
    if (ans == n)
        return true;
    else
        return false;
}

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
        int mx = INT_MIN, mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mx = max(mx, v[i]);
            mn = min(mn, v[i]);
        }
        bool flag = false;
        if (is_equal(v) || mx == mn || n < 2)
        {
            cout << "YES" << '\n';
            flag = true;
        }
        else
        {
            vector<int> pre(n);
            pre[-1] = 0;
            for (int i = 0; i < n; i++)
                pre[i] = pre[i - 1] + v[i];
            if (is_equal(pre))
            {
                cout << "YES" << '\n';
                flag = true;
            }
        }
        if (!flag)
            cout << "NO" << '\n';
    }
    return 0;
}