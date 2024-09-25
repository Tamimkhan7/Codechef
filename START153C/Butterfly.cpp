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
        int r, g, b;
        cin >> r >> g >> b;
        vector<int> v;
        v.push_back(r);
        v.push_back(g);
        v.push_back(b);
        sort(all(v));
        reverse(all(v));
        int ans = v[1] + v[2];
        // cout << ans << '\n';
        if (ans >= v[0])
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}