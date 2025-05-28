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

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < n; i++)
    {
        int sum = v[i];
        if (sum % 3 == 0)
        {
            cout << "Yes\n";
            return;
        }
        for (int j = i + 1; j < n; j++)
        {
            sum += v[j];
            if (sum % 3 == 0)
            {
                cout << "Yes\n";
                return;
            }
            for (int k = j + 1; k < n; k++)
            {
                sum += v[k];
                if (sum % 3 == 0)
                {
                    cout << "Yes\n";
                    return;
                }
            }
        }
    }
    cout << "No\n";
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}