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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(all(v));
        int x = k + 1;
        int y = n - x;
        // cout << x << ' ' << y << '\n';
        vector<int> a, b;
        for (int i = 0; i < y; i++)
            a.push_back(v[i]);
        reverse(all(v));
        for (int i = 0; i < x; i++)
        {
            if (i == 1)
                a.push_back(v[i]);
            else
                b.push_back(v[i]);
        }
        // for (auto x : b)
        //     cout << x << ' ';
        // cout << '\n';
        sort(all(a));
        sort(all(b));
        ll ans = *max_element(all(a));
        ans += *min_element(all(a));
        ans += *max_element(all(b));
        ans += *min_element(all(b));
        cout << ans << '\n';
    }
    return 0;
}