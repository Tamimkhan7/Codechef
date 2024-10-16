#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
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
        vector<int> even, odd;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2)
                odd.push_back(x);
            else
                even.push_back(x);
        }

        sort(all(even));
        sort(all(odd));
        vector<int> ans;
        if (!odd.empty())
        {
            ans.push_back(odd[0]);
            odd.erase(odd.begin());
        }
        while (!even.empty())
        {
            ans.push_back(even[0]);
            even.erase(even.begin());
        }
        while (!odd.empty())
        {
            ans.push_back(odd[0]);
            odd.erase(odd.begin());
        }
        vector<int> pre(ans.size(), 0);
        pre[0] = ans[0];
        for (int i = 1; i < ans.size(); i++)
        {
            pre[i] = pre[i - 1] + ans[i];
        }
        int cnt = 0;
        for (auto x : pre)
        {
            if (x % 2 != 0)
                cnt++;
            // cout << x << ' ';
        }
        // cout << '\n';
        cout << cnt << '\n';
    }
    return 0;
}
