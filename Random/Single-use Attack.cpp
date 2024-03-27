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
        ll x, y, h;
        cin >> x >> y >> h;
        ll k = x - h;
        ll p = k / y;
        if (k % y != 0)
            cout << p + 2 << endl;
        else if (k % y == 0)
            cout << p + 1 << endl;
    }
}
