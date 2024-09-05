#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll long long
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
        vector<int> v;
        map<int, int> cnt;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cnt[x]++;
            if (x != 0)
                v.push_back(x);
        }

        int zero_count = cnt[0];
        cnt.erase(0);           

        int max_freq_value = 0, max_freq = 0;
        for (auto &[key, val] : cnt)
        {
            if (val > max_freq)
            {
                max_freq = val;
                max_freq_value = key;
            }
        }

        cnt[max_freq_value] += zero_count;

        ll ans = 0;
        for (auto &[key, val] : cnt)
        {
            if (val > 1)  
                ans += (ll)val * (val - 1) / 2; 
          
        }

        cout << ans << '\n';
    }
    return 0;
}
