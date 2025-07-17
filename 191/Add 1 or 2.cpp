#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int n;
    cin >> n;
    vector<string> v;
    for (int i = 1; i <= n; i++)
        v.push_back(to_string(i));
    sort(v.begin(), v.end());
    vector<int> ans;
    for (auto s : v)
        ans.push_back(stoi(s));

    for (auto x : ans)
        cout << x << ' ';
    cout << '\n';
    return 0;
}