#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
        cout << ' ';
    cout << '\n';
}
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int ans = v[n - 1];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == ans)
        {
            count++;
        }
    }
    // cout << count << '\n';
    n -= count;
    // cout << v[n] << '\n';
    int res = ans - v[0];
    // cout << res << ' ' << count << '\n';
    int xp = n / m;
    if (n % m != 0)
        xp++;
    if (m == 1)
    {
        int tt = 0;
        for (int i = 0; i < n; i++)
        {
            tt += ans - v[i];
        }
        cout << tt << '\n';
        return;
    }
    cout << xp * res << '\n';
}
int32_t main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
        solve();
}