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
        int bal = 0;
        int cnt = 0;
        for (auto c : s)
        {
            if (c == '0')
                bal++;
            else
                bal--;
                
            if (bal == 0)
                cnt++;
        }

        if (cnt == 0)
            cout << 1 << '\n';
        else
            cout << (1 << cnt) << '\n';
    }
    return 0;
}