#include <bits/stdc++.h>
using namespace std;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        if (n <= 3)
        {
            cout << 0 << '\n';
            continue;
        }

        sort(a.begin(), a.end());
        int res = min({a[n - 1] - a[2],
                       a[n - 2] - a[1],
                       a[n - 3] - a[0]});

        cout << res << '\n';
    }
    return 0;
}
