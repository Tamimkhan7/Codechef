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
        int n, k;
        cin >> n >> k;
        string s, ss;
        cin >> s >> ss;
        map<char, int> cnt, cnt2;
        for (auto x : s)
            cnt[x]++;
        for (auto x : ss)
            cnt2[x]++;
        int ans0, ans1, res0, res1;

        // cout << ans0 << ' ' << ans1 << '\n';
        // cout << res0 << ' ' << res1 << '\n';
        for (auto [x, y] : cnt)
        {
            if (x == 0)
                ans0 = y;
            if (x == 1)
                ans1 = y;
        }
        for (auto [x, y] : cnt2)
        {
            if (x == 0)
                res0 = y;
            if (x == 1)
                res1 = y;
        }
        if (ans1 == res1 and n > k and abs(n - k) > 0)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}