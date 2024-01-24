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
void solve()
{
    int x;
    cin >> x;
    vector<pair<int, int>> v;
    int cnt = 0;
    for (int i = 0; i <= x; i++)
    {
        for (int j = i; j <= x; j++)
        {
            if ((i ^ j) == x)
            {
                if (v.size() == 0)
                {
                    v.push_back(make_pair(i, j));
                    cnt++;
                }
                else
                {
                    if ((j - i) < (v.front().second - v.front().first))
                    {
                        v.clear();
                        v.push_back(make_pair(i, j));
                        cnt++;
                    }
                }
            }
        }
    }
    cout << cnt << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}