#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define int int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        map<int, int> mp;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        int fre = mp[k];

        if (n % 2 == 0)
        {
            if (fre >= (n / 2))
            {
                cout << 0 << '\n';
                continue;
            }
        }
        else
        {
            if (fre >= (n / 2 + 1))
            {
                cout << 0 << '\n';
                continue;
            }
        }
        int left_cnt, right_cnt;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == k)
            {
                left_cnt = i;
                break;
            }
        }
        right_cnt = (n - 1) - left_cnt;
        // show(left_cnt), show(right_cnt);

        int ans = 1e9;
        map<int, int> cnt;
        for (int i = 0; i <= left_cnt; i++)
            cnt[v[i]]++;
        if (cnt[k] >= (left_cnt / 2) + 1)
        {
            if (1 <= ans)
                ans = 1;
        }
        cnt.clear();
        for (int i = left_cnt; i < n; i++)
            cnt[v[i]]++;

        if (cnt[k] >= (right_cnt / 2) + 1)
        {
            if (1 <= ans)
                ans = 1;
        }
        if (2 <= ans)
            ans = 2;

        // reverse
        reverse(all(v));
        left_cnt, right_cnt;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == k)
            {
                left_cnt = i;
                break;
            }
        }
        right_cnt = (n - 1) - left_cnt;
        // show(left_cnt), show(right_cnt);

        cnt.clear();
        for (int i = 0; i <= left_cnt; i++)
            cnt[v[i]]++;
        if (cnt[k] >= (left_cnt / 2) + 1)
        {
            if (1 <= ans)
                ans = 1;
        }
        cnt.clear();
        for (int i = left_cnt; i < n; i++)
            cnt[v[i]]++;

        if (cnt[k] >= (right_cnt / 2) + 1)
        {
            if (1 <= ans)
                ans = 1;
        }
        if (2 <= ans)
            ans = 2;

        cout << ans << '\n';
    }
}
