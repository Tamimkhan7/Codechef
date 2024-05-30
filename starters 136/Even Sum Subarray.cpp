#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
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
        int a[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j <= n; j++)
            {
                vector<int> v;
                for (int k = i; k <= j; k++)
                    v.push_back(a[k]);
                ll sum = accumulate(all(v), 0);
                if (sum % 2 == 0)
                {
                    if (v.size() > ans)
                        ans = v.size();
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}