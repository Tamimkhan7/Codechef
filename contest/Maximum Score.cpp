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
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int ans = 0, x;
    sort(a, a + n);
    int zero = 0, one = 0, sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            zero++;
        else
            one++;
    }
    cout << min(one, zero) << '\n';
}
int32_t main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
        solve();
}