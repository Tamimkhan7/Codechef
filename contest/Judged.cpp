#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int ans = 0;
        for (int i = 0; i < 5; i++)
        {
            int x;
            cin >> x;
            ans += x;
        }
        if (ans >= 4)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}