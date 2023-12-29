#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
#define pb push_back
#define pop pop_back()
#define len(a) sizeof(a)
#define lc (n * 2)
#define rc ((n * 2) + 1)
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, l;
        cin >> l >> a >> b;
        int c, d;
        if (l % a == 0)
            c = (l / a);
        else
            c = (l / a) + 1;
        if (l % b == 0)
            d = (l / b);
        else
            d = (l / b) + 1;
        if (c == d)
            cout << -1 << endl;
        else
            cout << (c - d) - 1 << endl;
    }
    return 0;
}