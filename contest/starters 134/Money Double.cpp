#include <bits/stdc++.h>
using namespace std;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int ans = 0;
        if (x < 1000)
            ans += x + 1000;
        else
            ans = x + x;
        y--;
        while (y--)
        {
            ans *= 2;
        }
        cout << ans << '\n';
    }

    return 0;
}
