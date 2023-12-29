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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int mx = a[0];
        int ans = 0;
        for (int i = 1; i < n; i++)
        {
            if (mx > a[i])
            {
                ans++;
                a[i]++;
            }
            else if (mx < a[i])
            {
                mx = a[i];
            }
        }
        cout << ans << '\n';
    }
}