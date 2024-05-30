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
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        int pos = 0;
        vector<int> v;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                pos++;
                v.push_back(i + 1);
            }
        }
        // cout << pos << '\n';
        // for (auto x : v)
        //     cout << x << ' ';
        // cout << '\n';
        if (pos == 0)
            cout << 0 << '\n';
        else if (pos == 1)
        {
            cout << 11 << '\n';
        }
        else if (pos == 2)
        {
            if (v[0] == 1 and v[1] == 2 || v[0] == 3 and v[1] == 4)
                cout << 21 << '\n';
            else
                cout << 11 * 11 << '\n';
        }
        else if (pos == 3)
        {
            cout << 231 << '\n';
        }
        else
            cout << 441 << '\n';
    }
    return 0;
}