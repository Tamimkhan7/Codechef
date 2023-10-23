#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> l(n), r(n);
    l[0] = a[0]; // first value insert to l variable
    for (int i = 1; i < n; i++)
    {
        l[i] = max(l[i - 1], a[i]);
    }
    r[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        r[i] = max(r[i + 1], a[i]);
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
        ans += min(l[i], r[i]);
    cout << ans << endl;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
