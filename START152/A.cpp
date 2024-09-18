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

int32_t main()
{
    MTK;
    int x, y, z;
    cin >> x >> y >> z;
    double a = x * 1 + y * 0.5;
    double b = y * 0.5 + z * 1;
    int ab = 4 - (x + y + z);
    // cout << a << ' ' << ab << '\n';
    a += (double)ab;
    if (a > b)
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';
    return 0;
}