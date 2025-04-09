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
        string ss = "ADVITIYA";
        string s;
        cin >> s;
        int ans = 0;
        for (int i = 0; i < 8; i++)
        {
            if (s[i] != ss[i])
            {
                int s_a = s[i] - 'A' + 1;
                int ss_a = ss[i] - 'A' + 1;
                // show(s_a), show(ss_a);

                if (ss_a > s_a)
                {
                    ans += ss_a - s_a;
                }
                else if (s_a > ss_a)
                {
                    int x = 26 - s_a;
                    x += ss_a;
                    ans += x;
                }
               
            }
        }
        cout << ans << '\n';
    }
    return 0;
}