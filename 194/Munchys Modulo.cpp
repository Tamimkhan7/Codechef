#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int32_t main()
{
    MTK;
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_map<int, int> freq;
        for (int &x : a)
        {
            cin >> x;
            freq[x]++;
        }

        sort(a.begin(), a.end());
        int ans = 0;

        for (int j = 0; j < n; ++j)
        {
            for (int k = j + 1; k < n; ++k)
            {
                int sum = a[j] + a[k];
                for (int i = n - 1; i >= 0; --i)
                {
                    int val = a[i];
                    int cnt = freq[val];

                    if (val == a[j])
                        cnt--;
                    if (val == a[k])
                        cnt--;

                    if (cnt > 0)
                    {
                        ans = max(ans, val % sum);
                        break;
                    }
                }
            }
        }

        cout << ans << '\n';
    }
    return 0;
}
