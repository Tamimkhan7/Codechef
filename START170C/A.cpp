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
        int n, x;
        cin >> n >> x;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            sum += val;
        }
        int res = sum / x;
        if (sum % x != 0)
            res += 1;
        cout << res << '\n';
    }
    return 0;
}