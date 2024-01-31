#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007
int32_t main()
{
    MTK;
    int T;
    cin >> T;

    while (T--)
    {
        int N, K;
        cin >> N >> K;

        vector<int> p(N);
        for (int i = 0; i < N; ++i)
            p[i] = i + 1;

        for (int i = 1; i <= K; ++i)
            swap(p[i - 1], p[i]);

        K *= 2;
        int ans = 0;
        for (int i = 0; i < K; i++)
        {
            if (ans < N)
            {
                cout << p[i] << ' ';
                ans++;
            }
        }
        for (int i = K - 1; i < N; i++)
        {
            if (p[i] % 2 == 0 and (ans < N))
            {
                cout << p[i] << ' ';
                ans++;
            }
        }
        for (int i = K - 1; i < N; i++)
        {
            if (p[i] % 2 != 0 and (ans < N))
            {
                cout << p[i] << ' ';
                ans++;
            }
        }
        cout << '\n';
    }
}