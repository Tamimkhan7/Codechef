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
        ll n = 3, maxi;
        ll arr[n];
        for (ll i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for (ll i = 0; i < 3; i++)
        {

            maxi = arr[1];
        }
        // cout << maxi << endl;
        ll k = (maxi * maxi) + (maxi * maxi);
        cout << k << endl;
    }
}
// wrong answer, i will another time