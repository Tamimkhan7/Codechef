#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define int int long long
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
        vector<int> v(n * 2), vv;

        for (int i = 0; i < n * 2; i++)
            cin >> v[i];

        // sort(all(vv));
        // reverse(all(vv));

        // ll alic = 0, bob = 0;
        // for (int i = 0; i < n * 2 and !vv.empty(); i++)
        // {
        //     alic += vv[0];
        //     show(vv[0]);
        //     vv.erase(vv.begin());
        //     while (!vv.empty())
        //     {
        //         auto it = find(vv.begin(), vv.end(), v[i]);
        //         if (it != vv.end())
        //         {
        //             // show(i);
        //             vv.erase(it);
        //             for (auto x : vv)
        //                 cout << x << ' ';
        //             cout << '\n';
        //             break;
        //         }
        //         i++;
        //     }
        // }
        // for (auto x : vv)
        //     cout << x << ' ';
        // cout << '\n';
        // cout << alic << '\n';

        priority_queue<int> q;
        int ans = 0;
        for (int i = n * 2 - 1; i >= 0; i -= 2)
        {
            q.push(v[i]);
            q.push(v[i - 1]);
            ans += q.top();
            q.pop();
        }
        cout << ans << '\n';
    }
    return 0;
}