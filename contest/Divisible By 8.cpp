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
        int n;
        cin >> n;
        string s, ss, x;
        cin >> s;
        string k;
        int len = s.size();
        int z = len - 5;
        if (len <= 18)
        {
            ll p = stoi(s);
            while (n >= 0)
            {
                if (p % 8 == 0)
                {
                    x = to_string(p);
                    break;
                }
                p++;
                n--;
            }
            cout << x << endl;
        }
        else
        {

            for (int i = z; i < len; i++)
            {
                k += s[i];
            }
            int p = stoi(k);
            while (n >= 0)
            {
                if (p % 8 == 0)
                {
                    x = to_string(p);
                    break;
                }
                n--;
                p++;
            }
            for (int i = 0; i < z; i++)
            {
                cout << s[i];
            }
            cout << x << endl;
        }
    }
    return 0;
}