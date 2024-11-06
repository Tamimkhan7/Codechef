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
        int n, x;
        cin >> n >> x;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        int cur_win = 0;
        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
                cur_win++;
            else
                v.push_back(b[i] - a[i] + 1);
        }

        if (cur_win > n / 2)
        {
            cout << "YES\n";
            continue;
        }

        sort(v.begin(), v.end());

        for (int votes : v)
        {
            if (x >= votes)
            {
                x -= votes;
                cur_win++;
            }
            else
                break;

            if (cur_win > n / 2)
                break;
        }

        cout << (cur_win > n / 2 ? "YES" : "NO") << '\n';
    }
    return 0;
}
