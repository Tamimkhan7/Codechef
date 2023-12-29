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
void subsequence(int a[], int n)
{
    int ct = 0, final_result = 0;
    for (int i = 0; i < (1 << n); i++)
    {
        ll ans = 1, size = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                size++;
                ans *= a[j];
            }
        }
        if (ans > 1)
        {
            ll k = sqrt(ans);
            if (k * k == ans)
            {
                ct++;
                final_result += size;
            }
        }
    }
    cout << ct << endl;
}
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        subsequence(a, n);
    }
    return 0;
}