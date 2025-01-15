#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        vector<ll> pos, neg;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] >= 0)
                pos.push_back(v[i]);
            else
                neg.push_back(v[i]);
        }

        vector<ll> mer;
        size_t i = 0, j = 0;
        while (i < pos.size() || j < neg.size())
        {
            if (i < pos.size())
            {
                mer.push_back(pos[i]);
                i++;
            }
            if (j < neg.size())
            {
                mer.push_back(neg[j]);
                j++;
            }
        }

        ll maxSum = 0, currentSum = 0;
        for (ll x : mer)
        {
            currentSum = max(x, currentSum + x);
            maxSum = max(maxSum, currentSum);
        }

        cout << maxSum << '\n';
    }
    return 0;
}
