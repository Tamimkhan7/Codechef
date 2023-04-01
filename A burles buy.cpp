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
    ll n, m, l;
    cin >> n >> m;
    ll k = n * m;
    if (k % 10 == 0)
    {
        cout << m << endl;
    }
    else
    {
        l = 10 - (k % 10);
        cout << l << endl;
    }
}
