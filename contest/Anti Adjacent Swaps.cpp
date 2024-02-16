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
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(all(b));
    if (a == b)
    {
        cout << "YES" << '\n';
        return;
    }
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 2; i < n; i++)
        {
            if (a[i] > a[j] and (abs(a[i] - a[j])) > 1)
            {
                swap(a[i], a[j]);
            }
        }
    }
    // for (auto x : a)
    //     cout << x << ' ';
    // cout << '\n';
    if (a == b)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
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