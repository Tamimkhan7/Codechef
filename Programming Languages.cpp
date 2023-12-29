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
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;

        if ((a == c || a == d) && (b == c || b == d))
        {
            cout << "1" << endl;
        }
        else if ((a == e || a == f) && (b == e || b == f))
        {
            cout << "2" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
}
