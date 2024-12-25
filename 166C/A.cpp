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
    int t;
    cin >> t;
    while (t--)
    {
        int h, l, w;
        cin >> h >> l >> w;
        int ans = 2 * ((h * l) + (l * w) + (w * h));
        int x = ans;
        int res = 0;
        while (ans <= 1000)
        {
            res++;
            ans += x;
        }
        cout << res << '\n';
    }
    return 0;
}