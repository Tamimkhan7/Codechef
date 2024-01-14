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
        vector<int> a, b, v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            b.push_back(x);
        }
        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());
        for (int i = 0; i < n; i++)
        {
            int x = a[i] + b[i];
            v.push_back(x);
        }
        int ct = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == v[i + 1])
                ct++;
        }
        // cout << ct << ' ' << v.size() << '\n';
      
        if (v.size()-1 == ct)
        {
            for (int i = 0; i < a.size(); i++)
            {
                cout << a[i] << ' ';
            }
            cout << '\n';
            for (int i = 0; i < a.size(); i++)
            {
                cout << b[i] << ' ';
            }
            cout << '\n';
        }
        else
            cout << -1 << '\n';
    }
}