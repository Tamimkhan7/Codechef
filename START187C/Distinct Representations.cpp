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
        string s;
        cin >> n >> s;
        set<string> se;
        se.insert(s);
        for (int j = 0; j < n - 3; j++)
        {
            string ss = s;
            for (int i = j; i < n - 3; i++)
            {
                if (ss[i] == ss[i + 2] and ss[i + 1] == ss[i + 3] and ss[i] != ss[i + 1])
                {
                    swap(ss[i + 1], ss[i + 2]);
                    // show(ss);
                    se.insert(ss);
                }
            }
        }
        cout << se.size() % mod << "\n";
    }
    return 0;
}