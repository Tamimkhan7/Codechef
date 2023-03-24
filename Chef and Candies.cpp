#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
int main()
{
    faster;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        ll k = (n - x);
        ll p = (n - x);
        ll r = (n - x) / 4;
        ll q = n % x;
        if (n < x)
            cout << 0 << endl;
        else if (k <= 4)
            cout << 1 << endl;
        else if (p % 4 != 0)
            cout << r + 1 << endl;
        else if (p % 4 == 0)
            cout << r << endl;
    }
}
