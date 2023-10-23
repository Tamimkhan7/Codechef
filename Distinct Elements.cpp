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
#define vc v.clear()
#define sz v.size()
#define lc (n * 2)
#define rc ((n * 2) + 1)
ll check(vector<ll> v)
{
    ll count = 0;
    if (v.size() == 1 && v[0] > 0)
    {
        count++;
    }
    else
    {
        int c = 0;
        for (int j = 0; j < v.size() - 1; j++) // Time: -O(n)
        {
            if (v[j] == v[j + 1])
            {
                c++;
                break;
            }
        }
        if (c == 0)
            count++;
    }
    return count;
}
void subsequence(int a[], int n)
{
}
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll res = 0;
    for (int mask = 0; mask < (1 << n); mask++) // Time: -O(n^2)
    {
        vector<ll> v;
        for (int i = 0; i < n; i++) // Time: -O(n), total time (n^3)
        {
            if ((mask >> i) & 1)
            {
                v.pb(a[i]);
                res += check(v);
            }
        }
    }
    res--;
    cout << (res % mod) << endl;
}
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}