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
        int N = 1;
        int mx = -1, pos;
        while (N < 23)
        {
            int a, b;
            cin >> a >> b;
            int ans = a + b * 20;
            if (ans > mx)
            {
                mx = ans;
                pos = N;
            }
            N++;
        }
        cout << pos << '\n';
    }
}