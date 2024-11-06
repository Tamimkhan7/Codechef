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
        int n, x;
        cin >> n >> x;
        int ans = 0;
        for (int i = n; i > 0; i--)
        {
            if ((x + i) % 2 == 0 and x != i)
                ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}