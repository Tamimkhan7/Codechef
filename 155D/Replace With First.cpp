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
        int n, m;
        string s, ss;
        cin >> n >> m >> s >> ss;
        while (!s.empty() and !ss.empty() and s.front() == ss.front())
            s.erase(s.begin()), ss.erase(ss.begin());
        while (!s.empty() and !ss.empty() and s.back() == ss.back())
            s.pop_back(), ss.pop_back();
        cout << s.size() + ss.size() << '\n';
    }
    return 0;
}