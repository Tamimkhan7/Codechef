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
    int t;
    cin >> t;
    while (t--)
    {
        string s, ss;
        cin >> s;
        int l = s.size();
        for (int i = l - 1; i >= 0; i--)
        {
            ss += s[i];
        }
        if (ss == s)
            cout << "wins" << endl;
        else
            cout << "loses" << endl;
    }
}
