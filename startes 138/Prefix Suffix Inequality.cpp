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
void solve()
{
    int n;
    cin >> n;
    int p = 100;
    vector<int> ans;
    ans.push_back(p);
    for (int i = 1; i <= n; i++)
    {
        for (int j = p - 1; j >= 1; j--)
        {
            if ((p & j) >= (p ^ j))
            {
                p = j;
                ans.push_back(p);
                break;
            }
        }
        if (p < 1)
            p = 100;
    }
    ans.pop_back();
    for (auto x : ans)
        cout << x << ' ';
    cout << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}