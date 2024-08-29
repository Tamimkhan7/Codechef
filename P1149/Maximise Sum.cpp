#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long

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
        ll sum = 0;
        int min_abs_value = INT_MAX;
        int neg_count = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += abs(v[i]);
            min_abs_value = min(min_abs_value, abs(v[i]));
            if (v[i] < 0)
            {
                neg_count++;
            }
        }
        if (neg_count % 2 != 0)
        {
            sum -= 2 * min_abs_value;
        }

        cout << sum << '\n';
    }
    return 0;
}
