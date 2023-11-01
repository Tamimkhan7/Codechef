#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int m = 0, x, ans;
    x = sqrt(n);
    while (x >= 0)
    {
        ans = pow(2, m);
        if (a[ans] > a[ans + 1])
        {
            int res = abs(a[ans] - a[ans + 1]);
            for (int i = ans; i >= 1; i--)
            {
                if (a[i] >= res)
                    a[i] -= res;
                else
                    a[i] = 0;
            }
        }
        m++;
        x--;
    }
    int ct = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] <= a[i + 1])
            ct++;
    }
    if (ct == n - 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
