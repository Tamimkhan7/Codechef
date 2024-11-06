#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007

int power(int x, int n)
{
    int ans = 1 % mod;
    while (n > 0)
    {
        if (n & 1)
            ans = 1LL * ans * x % mod;
        x = 1LL * x * x % mod;
        n >>= 1;
    }
    return ans;
}

int inverse(int p, int q)
{
    return power(p, q - 2);
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        vector<int> val(n);

        for (int i = 0; i < n; i++)
            cin >> val[i];

        int p = (d + 1);
        int q = d * 2;
        int ans = inverse(p, q) % mod;
        cout << ans << "\n";
    }
    return 0;
}
