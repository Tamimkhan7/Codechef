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
        int x, y;
        if (n % 2)
        {
            x = n / 2;
            y = n - x;
            cout << (1LL * (1LL * x * y) * 2) << '\n';
        }
        else
        {
            x = n / 2;
            cout << (1LL * (1LL * x * x) * 2) << '\n';
        }
    }
    return 0;
}