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
        vector<int> v;
        for (int i = 0; i <= n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        // for (auto x : v)
        //     cout << x << ' ';
        // cout << '\n';
        // cout << v.back() << '\n';
        vector<int> ans;
        while (1)
        {
            int cnt = 0;
            for (int i = 0; i < v.size() - 1; i++)
            {
                if (v[i] <= (v.back() * 2) and v[i] > v.back())
                {
                    int x = v[i];
                    v.erase(v.begin() + i);
                    ans.push_back(v.back());
                    v.pop_back();
                    v.push_back(x);
                    cnt++;
                }
            }
            // for (auto x : v)
            //     cout << x << ' ';
            // cout << '\n';

            if (cnt == 0)
                break;
        }
        v.pop_back();

        for (auto x : v)
            ans.push_back(x);
        int sum = 0;
        for (int i = 0; i < ans.size(); i++)
            sum += ans[i];
        cout << sum << '\n';
    }
    return 0;
}