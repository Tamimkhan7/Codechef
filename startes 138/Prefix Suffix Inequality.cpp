#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007
vector<int> f(int n)
{
    if (n == 1)
        return {1};
    else if (n == 2)
        return {7, 3};
    else if (n == 3)
        return {5, 7, 3};
    else
    {
        vector<int> ans(n, 7);
        ans[0] = 5;
        ans[n - 1] = 3;
        return ans;
    }
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> ans = f(n);
        for (auto x : ans)
            cout << x << ' ';
        cout << '\n';
    }
    return 0;
}