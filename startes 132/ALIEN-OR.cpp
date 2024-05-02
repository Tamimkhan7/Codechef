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
int com(int n)
{
    int dec = 0, i = 0, rem;
    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        i++;
    }
    return dec;
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            int ans = com(x);
            if (ans > 0)
                v.push_back(ans);
        }
        // cout << v.size() << '\n';
        // for (auto x : v)
        //     cout << x << ' ';
        // cout << '\n';
        int flag = 0;
        int xx = 1;
        for (int i = 0; i < v.size(); i++)
        {
            xx |= v[i];
            // if (x != v[i + 2])
            // {
            //     flag = 1;
            //     break;
            // }
        }
        cout << xx << '\n';

        // cout << '\n';
        // int ans = n * (n + 1) / 2;
        int x = pow(2, k);
        if (xx < x)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}