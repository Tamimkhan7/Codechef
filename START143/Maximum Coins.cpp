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
        int x, n;
        cin >> x >> n;
        int ans = 0, ans2 = 0;
        int p = x - n;
        for (int i = x; i > p; i--)
            ans += pow(2, i);

        for (int i = 1; i <= p; i++)
            ans2 += pow(2, i);
        cout << ans - ans2 << '\n';
    }
    return 0;
}