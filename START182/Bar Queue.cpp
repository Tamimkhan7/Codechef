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
        string s;
        cin >> s;
        int ans = 0;
        int bo = 0, gi = 0;
        for (int i = 0; i < (int)s.size(); i++)
        {
            ans++;
            if (s[i] == 'B')
                bo++;
            else
                gi++;
            if (bo > gi * 2)
                break;
        }
        cout << ans << '\n';
    }
    return 0;
}