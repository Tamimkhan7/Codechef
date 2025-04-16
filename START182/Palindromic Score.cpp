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
        vector<int> s;
        for (int i = 0; i < 3; i++)
        {
            int x;
            cin >> x;
            s.push_back(x);
        }
        sort(all(s));
        int x = s[0], y = s[1];
        if ((x % 2 == 0 and y % 2 == 0) || (x % 2 == 0 and y % 2 != 0) || ((x % 2 != 0 and y % 2 == 0)))
            cout << x + y << '\n';
        else
            cout << (x + y) - 1 << '\n';
    }
    return 0;
}