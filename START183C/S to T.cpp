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
        string s, t;
        cin >> s >> t;

        vector<int> v;
        if (s[0] != t[0])
        {
            cout << -1 << '\n';
            continue;
        }
        if (s == t)
        {
            cout << 0 << '\n';
            continue;
        }

        for (int i = 1; i < n; i++)
        {
            if (s[i] == '0' and s[i - 1] == '1')
            {
                v.push_back(i);
                s[i] = '1';
            }
        }
        // show(s), show(t);
        bool ok = true;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] != t[i])
            {
                if (s[i - 1] == '1')
                {
                    v.push_back(i);
                    s[i] = t[i];
                }
                else
                {
                    ok = false;
                    break;
                }
            }
        }
        if (ok)
        {
            cout << v.size() << '\n';
            for (auto x : v)
                cout << x << ' ';
            cout << '\n';
        }
        else
            cout << -1 << '\n';
    }
    return 0;
}
