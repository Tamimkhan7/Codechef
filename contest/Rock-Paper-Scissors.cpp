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
        string s;
        cin >> s;
        int x = n * 2, m = n;
        if (n >= 3)
        {
            int k = floor(n / 2);
            n -= k;
        }
        vector<string> v;
        while (x-- and m > 2)
        {
            string ss;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'R')
                    ss += 'P';
                else if (s[i] == 'P')
                    ss += 'S';
                else if (s[i] == 'S')
                    ss += 'R';
            }
            for (int i = n; i < m; i++)
            {
                ss += s[i];
            }
            s = ss;
            sort(all(ss));
            v.push_back(ss);
            cout << v[x] << '\n';
        }
        sort(all(v));
        cout << v[0] << '\n';
        string ss;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'R')
                ss += 'P';
            else if (s[i] == 'P')
                ss += 'S';
            else if (s[i] == 'S')
                ss += 'R';
        }
        cout << ss << '\n';
    }
}