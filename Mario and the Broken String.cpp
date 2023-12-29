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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll k = n / 2;
        ll c = 0;
        for (ll i = 0; i < k; i++)
        {
            if (s[i] == s[i + k])
                c++;
        }
        if (c == k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
