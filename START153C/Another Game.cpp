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

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n), p;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            p.push_back(v[i]);
        }
        sort(all(p));
        if (is_sorted(all(v)))
        {
            cout << 0 << '\n';
            continue;
        }
        int mx = 0, mn = p[0];
        for (int i = 0; i < n; i++)
        {
            if (v[i] != p[i])
                mx = max(v[i], p[i]);
        }
        cout << mx + mn << '\n';
    }
    return 0;
}