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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(all(v), greater<int>());
        int mn = 1e9 + 7, flag = 0;
        for (auto x : v)
        {
            if (x >= k)
            {
                int ans = x % k;
                mn = min(ans, mn);
                flag = 1;
            }
        }
        if (flag == 0)
            cout << -1 << '\n';
        else
            cout << mn << '\n';
    }
}