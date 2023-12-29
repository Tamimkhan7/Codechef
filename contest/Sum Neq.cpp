#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
void solve()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    if (n == 4)
    {
        int sum = a[1] + a[2];
        int sum2 = a[3] + a[4];
        if (sum != sum2)
        {
            cout << "YES" << '\n';
        }
        else
            cout << "NO" << '\n';
    }
    else
    {
        int ct = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[i + 1])
                ct++;
        }
        cout << ct << '\n';
        if (ct == n - 1)
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }
}
int32_t main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}