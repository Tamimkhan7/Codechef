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
bool check(int n)
{
    int flag = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        return true;
    else
        return false;
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n + 1), x;
        for (int i = 1; i <= n; i++)
            cin >> v[i];
        int mx = *max_element(all(v));
        int mn = *min_element(all(v));
        for (int i = 1; i <= n; i++)
        {
            int p = i + v[i];
            if (check(p) == true)
            {
                x.push_back(p);
            }
        }
        if (x.size() == n)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}