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

int main()
{
    MTK;
    vector<int> v;
    for (int i = 2; i <= 1e5; i *= 2)
        v.push_back(i);
    // for (auto x : v)
    //     cout << x << ' ';
    // cout << '\n';
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] <= n)
                ans = v[i];
            else
                break;
        }
        int x = n - ans;      
        cout << x * 2 << '\n';
    }
    return 0;
}
