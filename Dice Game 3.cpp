#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = (n / 2);
        ans += ((ans) * 6) * 2;
        cout << ans << '\n';
    }
}