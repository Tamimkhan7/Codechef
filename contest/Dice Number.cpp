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
        string s, ss, sss;
        for (int i = 0; i < 6; i++)
        {
            if (i < 3)
            {
                cin >> s;
                ss += s;
            }
            else
            {
                cin >> s;
                sss += s;
            }
        }
        sort(ss.begin(), ss.end(), greater<int>());
        sort(sss.begin(), sss.end(), greater<int>());
        if (ss > sss)
            cout << "Alice" << endl;
        else if (ss < sss)
            cout << "Bob" << endl;
        else
            cout << "Tie" << endl;
    }
    return 0;
}