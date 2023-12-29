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
        ll n, l, k, m, p, q, r;
        cin >> n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (ll i = 0; i < n; i++)
        {
            // cout << arr[i] << endl;
            if (arr[i] < arr[i + 1])
            {
                l = arr[i + 1];
                k = arr[i];
                m = l - k;
            }
            else
            {
                l = arr[i];
                k = arr[i + 1];
                m = l - k;
            }
            // cout << m << endl;
        }
        for (ll i = 0; i < n; i++)
        {
            p = arr[i];
            q = arr[i + 1];
            r = q - p;
        }
        // cout << r << endl;
        if (m == r)
            cout << "2" << endl;
        else
            cout << "1" << endl;
    }
}
