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
        vector<int> v(n - 1), ans;
        for (int i = 0; i < n - 1; i++)
            cin >> v[i];
        sort(all(v));
        ans.push_back(1);
        for (int i = 0; i < n - 1; i++)
        {
            int x = ans.back();
            int y = v[i];
            ans.push_back(y - x);
        }
        for (auto x : ans)
            cout << x << ' ';
        cout << '\n';
    }
    return 0;
}