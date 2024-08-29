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
        int a, b, x;
        cin >> a >> b >> x;
        int pw = pow(x, 2);
        int ans = a * b;
        if (a * b <= pw)
            cout << 0 << '\n';
        else
        {
            int ans1 = 1 * b;
            int ans2 = a * 1;
            if (ans1 <= pw || ans2 <= pw)
                cout << 1 << '\n';
            else
                cout << 2 << '\n';
        }
    }
    return 0;
}