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
    ll n, k, x, l;
    cin >> n >> k;
    set<ll> s;
    vector<ll> v;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            x = i;
            l = n / i;
            s.insert(x);
            s.insert(l);
        }
    }
    v.assign(s.begin(), s.end());
    if (k > v.size())
        cout << -1 << endl;
    else
        cout << v[k - 1] << endl;
}