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
        int n, m;
        cin >> n >> m;
        string s, ss;
        cin >> s >> ss;
        int temp, minmove, moves, a, b;
        for (int i = 0; i <= n - m; i++)
        {
            moves = 0;
            for (int j = i, l = 0; j < m + i, l < m; j++, l++)
            {
                a = int(s[j]);
                b = int(ss[l]);
                temp = abs(a - b);
                if (temp > 5)
                    temp = 10 - temp;
                moves += temp;
            }
            if (i == 0)
                minmove = moves;
            else if (moves < minmove)
                minmove = moves;
        }
        cout << minmove << endl;
    }
    return 0;
}