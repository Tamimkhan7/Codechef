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
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    int ans = a * b * c;
    int ans2 = x * x * x;
    if (ans > ans2)
        cout << "Cuboid" << '\n';
    else if (ans < ans2)
        cout << "Cube" << '\n';
    else
        cout << "Equal" << '\n';
    return 0;
}