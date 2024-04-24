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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        ll sum = 0;

        for (ll i = 0; i < n; i++)
        {
            if (a[i] == 1 or sum < 2)
                sum = (sum % mod + a[i] % mod) % mod;
            else
                sum = (sum % mod * a[i] % mod) % mod;
        }

        cout << (sum % mod) << '\n';
    }
}
