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
    vector<int> v;
    int l, r, i;
    while (t--)
    {
        int k = 0, c = 0;
        cin >> l >> r;
        for (i = l; i <= r; i++)
        {
            k++;
            v.push_back(i);
            reverse(v.begin(), v.end());
        }
        for (i = 1; i <= k; i++)
        {
            for (int j = 0; j < v.size(); j++)
            {
                if (v[0] == 2 || v[0] == 3 || v[0] == 9)
                    c++;
            }
        }
        cout << c << endl;
    }
    `
}
// pore korbo, this code have some mistake
