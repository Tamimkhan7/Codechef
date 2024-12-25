#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int n;
    cin >> n;
    vector<int> P(n);
    for (int i = 0; i < n; ++i)
        cin >> P[i];

    vector<bool> vis(n, false);
    vector<int> cyc;

    for (int i = 0; i < n; ++i)
    {
        if (!vis[i])
        {
            int curr = i, size = 0;
            while (!vis[curr])
            {
                vis[curr] = true;
                curr = P[curr] - 1;
                size++;
            }
            cyc.push_back(size);
        }
    }

    int total = 0;
    int mx_sz = 0;

    for (int size : cyc)
    {
        total += size;
        mx_sz = max(mx_sz, size);
    }

    cout << total - mx_sz << '\n';
}

int main()
{

    int T;
    cin >> T;
    while (T--)
        solve();

    return 0;
}
