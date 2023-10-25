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
void solve()
{
    int n;
    cin >> n;
    int p, q;
    cin >> p >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(all(a));
    int x, y, ans;
    while (p > 0 || q > 0)
    {
        if (q != 0)
        {
            x = a[0];
            a.erase(a.begin());
            y = a[a.size() - 1];
            a.erase(a.end() - 1);
            ans = y - x;

            // a.resize(a.size() - 1);
            a.insert(a.end() - 1, ans);
            q--;
            if (p != 0)
            {
                x = a[0];
                a.erase(a.begin());
                y = a[a.size() - 1];
                a.erase(a.end() - 1);
                ans = y + x;
                // a.resize(a.size() - 1);
                a.insert(a.begin() + 1, ans);
                p--;
            }
        }
        if (p != 0)
        {
            x = a[0];
            a.erase(a.begin());
            y = a[a.size() - 1];
            a.erase(a.end() - 1);
            ans = y + x;
            // a.resize(a.size() - 1);
            a.insert(a.begin() + 1, ans);
            p--;
        }
    }
    int maxi = *max_element(all(a));
    int mini = *min_element(all(a));
    cout << maxi - mini << endl;
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