#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    vector<tuple<int, int, int>> data;

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        data.emplace_back(a[i], b[i], i);
    }

    sort(data.begin(), data.end());

    priority_queue<int, vector<int>, greater<int>> pq;
    ll sum = 0;
    vector<ll> res(n);

    for (auto &[ai, bi, idx] : data)
    {
        res[idx] = sum;
        pq.push(bi);
        sum += bi;
        if ((int)pq.size() > k)
        {
            sum -= pq.top();
            pq.pop();
        }
    }

    for (auto x : res)
        cout << x << ' ';
    cout << '\n';
}

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
