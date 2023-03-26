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
        ll n, d;
        cin >> n >> d;
        ll arr[n];
        for (ll i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        ll c = 0;
        for (ll i = 1; i <= n; i++)
        {
            if (arr[i] >= d)
                c++;
        }
        if (c != 0)
            cout << c << endl;
        else
            cout << -1 << endl;
    }
}
// that is wrong answer
