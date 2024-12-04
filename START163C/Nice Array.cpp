#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define int int long long
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
        vector<int> v(n), pre1(n), pre2(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];
        pre1[0] = ceil(v[0] * 1.0 / k);
        pre2[0] = floor(v[0] * 1.0 / k);

        for (int i = 1; i < n; i++)
        {
            pre1[i] = pre1[i - 1] + ceil(v[i] * 1.0 / k);
            pre2[i] = pre2[i - 1] + floor(v[i] * 1.0 / k);
        }
        // cout << pre1.back() << ' ' << pre2.back() << '\n';
        if (pre1.back() == 0 || pre2.back() == 0 || (pre1.back() >= 0 and pre2.back() <= 0))
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}