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
    int k, n;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int ans, i = 1;
    while (k--)
    {
        if (i == 1)
        {
            int x = v[0];
            v.erase(v.begin());
            int y = v.back();
            v.pop_back();
            ans = x + y;
        }
        else
        {
            int x = v[0];
            v.erase(v.begin());
            ans += x;
        }
        i++;
    }
    v.push_back(ans);
    for (auto x : v)
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