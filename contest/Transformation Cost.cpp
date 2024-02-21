#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007
int N = 2e30;
void solve()
{
    int n;
    cin >> n;
    int xc = 0, ans = 0;
    while (N > n)
    {
        string s;
        bitset<31> x(n);
        s = x.to_string();
        int pos, flag = 0, cnt = 0;
        
        if (cnt != 3)
        {
            cout << ans << '\n';
            return;
        }
        xc++;
        n -= ans;
        ans = pow(2, xc);
        n += ans;
    }
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}