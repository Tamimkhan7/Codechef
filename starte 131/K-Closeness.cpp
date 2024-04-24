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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        reverse(a, a + n);
        int max_value = a[0];
        for (int i = 1; i < n; i++)
        {
            int x = max_value - a[i];
            // if (x == k)
            //     a[i] += x;

            x /= k;
            if (x > 0)
            {
                // cout << x << ' ' << k << '\n';
                if ((k / 2) <= x and (k / 2) > 1)
                    k++;
                x *= k;
                a[i] += x;
            }
        }
        sort(a, a + n);
        // for (int i = 0; i < n; i++)
        //     cout << a[i] << ' ';
        // cout << '\n';
        // int len = n;
        cout << a[n - 1] - a[0] << '\n';
    }
}
