#include <bits/stdc++.h>
using namespace std;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007

int main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] %= k;
            cout << a[i] << ' ';
        }
        cout << '\n';
        sort(all(a), greater<int>());
        ll ans = a[0] - a[n - 1];
        for (int i = n - 1; i > 0; i--)
            ans = min(ans, a[i] + k - a[i - 1]);
        // ll x = a[i] + k - a[i - 1];

        cout << ans << '\n';
    }
}
