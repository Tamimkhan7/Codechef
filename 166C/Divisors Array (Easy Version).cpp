#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll int long long
#define mod 1000000007

ll fact(int m)
{
    ll ans = 1;
    for (int i = 1; i <= m; i++)
    {
        ans = ans * i % mod;
        ans %= mod;
    }
    return ans;
}

int32_t main()
{
    MTK;
    int n, m;
    cin >> n >> m;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    ll fa = fact(m);
    for (int i = 0; i < n; i++)
        v[i] = v[i] * fa % mod;

    unordered_map<ll, int> freq;
    for (auto x : v)
        freq[x]++;

    unordered_map<ll, int> ans;
    for (auto [x, count] : freq)
    {
        for (ll i = 1; i * i <= x; i++)
        {
            if (x % i == 0)
            {
                ans[x]++;
                if (i != x / i)
                    ans[x]++;
            }
        }
    }

    for (auto x : v)
        cout << ans[x] << ' ';
    cout << '\n';
    return 0;
}
