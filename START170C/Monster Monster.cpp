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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        ll tot = 0;
        sort(all(v));
        reverse(all(v));
        for (int i = 0; i < n; i++)
        {

            ll val = 1LL * x * i;
            val += v[i];
            tot = max(tot, val);
        }
        cout << tot << '\n';
    }
    return 0;
}