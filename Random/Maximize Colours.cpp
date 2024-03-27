#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007
int32_t main()
{
    MTK;
    vector<string> v;
    string s;
    getline(cin, s);
    s.pop_back();
    reverse(all(s));
    s.pop_back();

    // cout << s << '\n';
    stringstream ss(s);
    string word;
    while (ss >> word)
    {
        cout << word << '\n';
    }
}