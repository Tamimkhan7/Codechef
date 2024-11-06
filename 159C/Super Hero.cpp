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

const int N = 1e7 + 9;
bool f[N];
vector<ll> prime;
void sieve()
{
    f[1] = true;
    for (int i = 2; i * i < N; i++)
    {
        if (!f[i])
        {
            prime.push_back(i);
            for (int j = i * i; j < N; j += i)
                f[j] = true;
        }
    }
    for (int i = 2; i < N; i++)
    {
        if (!f[i])
            prime.push_back(i);
    }
}

int32_t main()
{
    MTK;
    sieve();
    int t;
    cin >> t;
    while (t--)
    {
        int h, k;
        cin >> h >> k;
        ll x = 1LL * h * k;
        ll e = 0;
        for (int i = 0; i < prime.size() && 1LL * prime[i] * prime[i] <= x; i++)
        {
            int p = prime[i];
            if (x % p == 0)
            {
                while (x % p == 0)
                {
                    e++;
                    x /= p;
                }
            }
        }
        if (x > 1)
            e++;
        cout << e << '\n';
    }
    return 0;
}
