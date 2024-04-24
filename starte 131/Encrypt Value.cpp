#include <bits/stdc++.h>
using namespace std;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007

int main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        int s = a[0];
        ll ans = 0;
        // for (auto x : a)
        //     cout << x << ' ';
        // cout << '\n';
        for (int i = 1; i < n; i++)
        {
            // cout << s << ' ';
            int x = (1LL * a[i] * s) % mod;
            int y = (a[i] + s) % mod;
            ans = (max(ans, (1LL * max(x, y)))) % mod;
            s = ans;
        }
        cout << ans << '\n';
    }
}
