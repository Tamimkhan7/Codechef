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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        priority_queue<int> q;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            q.push(x);
        }
        int ans = 0;
        while (q.top() > 1)
        {
            ans++;
            int x = q.top();
            q.pop();
            if (x % 2 == 0)
                q.push(x / 2), q.push(x / 2);
            else
                q.push(x / 2), q.push(x / 2 + 1);
        }
        cout << ans  << '\n';
    }

    return 0;
}