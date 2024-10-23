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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int ans = n;
        for (int i = 0; i < n; i++)
        {
            vector<int> x;
            x.push_back(v[i]);
            for (int j = i + 1; j < n; j++)
            {
                x.push_back(v[j]);
                sort(all(x));
                double sum = accumulate(all(x), 0);
                int sz = x.size();
                int val;
                if (sz % 2 == 0)
                    val = x[sz / 2 - 1];
                else
                    val = x[sz / 2];
                if ((sum / sz) == val)
                    ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}