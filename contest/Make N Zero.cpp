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
    if (n % 4 == 0 || n % 3 == 0)
    {
        cout << "YES" << '\n';
        return;
    }
    while (n > 0)
    {
        if (n % 2 == 0)
        {
            n -= 4;
            if (n % 4 == 0 || n % 3 == 0)
            {
                cout << "YES" << '\n';
                return;
            }
        }
        else if (n % 2 == 1)
        {
            n -= 3;
            if (n % 4 == 0 || n % 3 == 0)
            {
                cout << "YES" << '\n';
                return;
            }
        }
    }
    if (n == 0)
    {
        cout << "YES" << '\n';
    }
    else
        cout << "NO" << '\n';
}
int32_t main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
        solve();
}