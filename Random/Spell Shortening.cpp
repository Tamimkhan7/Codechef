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
    int n;
    cin >> n;
    string s;
    cin >> s;
    // if (s[0] > s[1])
    // {
    //     s.erase(s.begin());
    //     cout << s << '\n';
    //     return;
    // }

    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] > s[i + 1])
        {
            s.erase(s.begin() + i);
            cout << s << '\n';
            return;
        }
    }

    s.erase(s.begin() + n - 1);
    cout << s << '\n';
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