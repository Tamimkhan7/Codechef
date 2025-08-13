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
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int &x : v)
            cin >> x;

        unordered_map<int, int> freq;
        for (int x : v)
            freq[x]++;

        int ans = n;
        for (auto [color, cnt] : freq)
        {
            int ops = 0;
            if (color != 1)
                ops++;
            ops += n - cnt;
            ans = min(ans, ops);
        }
        cout << ans << '\n';
    }
    return 0;
}
