#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()
#define MTK                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);

int32_t main()
{
    MTK;
    int T;
    cin >> T;
    while (T--)
    {
        int n, k, d;
        cin >> n >> k >> d;
        vector<int> t(n), val(n, 1);
        for (int i = 0; i < n; i++)
            cin >> t[i];
        sort(all(t));

        int ans = 0;
        for (int i = 0; i < n - k; i++)
        {
            if (t[i] >= d)
                ans++;
            else
            {
                if (d % t[i] == 0)
                    ans += (d / t[i]);
                else
                    ans += (d / t[i]) + 1;
            } 
        }
        cout << ans << '\n';
    }
    return 0;
}
