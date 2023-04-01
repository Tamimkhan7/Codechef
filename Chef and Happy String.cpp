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
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll c = 0;
        ll l = s.size();
        // cout << l << endl;
        for (ll i = 0; i < l; i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                c++;

                if (c == 3)
                {
                    cout << "Happy" << endl;
                    break;
                }
            }
            else
            {
                c = 0;
            }
        }
        if (c != 3)
            cout << "Sad" << endl;
    }
}
