#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n], b[n];
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a + n);
    int flag = 0;
    if (sum % n == 0)
    {
        for (int i = 0; i < n; i++)
        {
            b[i] = (sum / n);
        }
        for (int i = 0; i < n; i++)
        {
            if (abs(a[i] - b[i]) % 2 != 0)
            {
                flag = 1;
            }
        }
        if (flag)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}