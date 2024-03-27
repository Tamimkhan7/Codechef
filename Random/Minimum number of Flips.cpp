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
        ll n, sum = 0, sum2 = 0;
        cin >> n;
        ll arr[n];
        for (ll i = 1; i <= n; i++)
            cin >> arr[i];
        for (ll i = 1; i <= n; i++)
            if (arr[i] == 1)
                sum += arr[i];
            else
                sum2 += arr[i];

        ll result = sum2 + sum;
        if (result % 2 == 0)
            cout << result / 2 << endl;
        else
            cout << -sum - sum2 << endl;
    }
}
