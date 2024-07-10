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

bool curvalue(int n)
{
    return n && !(n & (n + 1));
}

int main()
{
    MTK;
    int T;
    cin >> T;

    vector<int> v(T);

    for (int t = 0; t < T; ++t)
    {
        int N;
        cin >> N;

        vector<int> A(N);
        int cur = 0;
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
            cur |= A[i];
        }

        if (curvalue(cur))
        {
            v[t] = 0;
            continue;
        }

        int ans = N;

        for (int mask = 1; mask < (1 << N); ++mask)
        {
            int orResult = 0;
            int count = 0;
            for (int i = 0; i < N; ++i)
            {
                if (!(mask & (1 << i)))
                    orResult |= A[i];
                else
                    count++;
            }
            if (curvalue(orResult))
                ans = min(ans, count);
        }

        v[t] = ans;
    }

    for (const int &res : v)
        cout << res << '\n';

    return 0;
}
