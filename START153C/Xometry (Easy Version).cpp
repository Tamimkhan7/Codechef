#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; ++i)
        cin >> v[i];

    unordered_map<ll, ll> xor_count;

    ll ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int xor_val = v[i] ^ v[j];
            ans += xor_count[xor_val];
            xor_count[xor_val]++;
        }
    }
    // for (const auto &[x, y] : xor_count)
    // {
    //     if (y > 1)
    //         ans += y * (y - 1) / 2;
    // }
    cout << ans * 8 << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}