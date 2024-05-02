#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll int long long

int32_t main()
{
    MTK;
    int x, y;
    cin >> x >> y;
    if (x * 2 <= y)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
}