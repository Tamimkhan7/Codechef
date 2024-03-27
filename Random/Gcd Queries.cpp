#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;

int gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    faster;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        ll arr[n + 3];
        for (ll i = 1; i <= n; i++)
            cin >> arr[i];
        ll pre[n + 2];
        ll pos[n + 2];
        pre[0] = 0;
        for (ll i = 1; i <= n; i++)
            pre[i] = gcd(pre[i - 1], arr[i]);

        pos[n + 1] = 0;
        for (ll i = n; i >= 1; i--)
            pos[i] = gcd(pos[i + 1], arr[i]);
        while (q--)
        {
            ll l, r;
            cin >> l >> r;
            ll ans = gcd(pre[l - 1], pos[r + 1]);
            cout << ans << endl;
        }
    }
}
