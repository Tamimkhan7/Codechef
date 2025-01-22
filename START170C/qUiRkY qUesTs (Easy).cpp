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
        int n;
        cin >> n;
        vector<ll> v(n);
        ll cursum = 0;
        for (ll i = 0; i < n; i++)
            cin >> v[i];
        sort(all(v));
        for (ll i = 0; i < n; i++)
            cursum = max((i + 1) * (i + 1), cursum + v[i]);
        cout << max(cursum, 1LL * n * n) << '\n';
    }
    return 0;
}