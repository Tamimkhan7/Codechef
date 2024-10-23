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
        int n, m;
        cin >> n >> m;
        string sa, sb;
        cin >> sa >> sb;
        unordered_map<char, int> cnt, cnt2;
        for (auto c : sa)
            cnt[c]++;

        for (auto c : sb)
            cnt2[c]++;

        string s = "";
        for (char c = 'a'; c <= 'z'; c++)
        {
            if (cnt[c] > 0 || cnt2[c])
                continue;
            else
                s += c;
        }

        if (s.empty())
            cout << "No" << '\n';
        else
            cout << "Yes" << '\n';
    }
    return 0;
}