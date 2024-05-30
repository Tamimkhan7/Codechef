#include <bits/stdc++.h>
using namespace std;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long

const int N = 2e5 + 9;
ll a[N];

int main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        for (int i = 1; i <= n; ++i)     
            cin >> a[i];     

        while (q--)
        {
            int k;
            cin >> k;
            multiset<ll, greater<ll>> s;
            for (int i = 1; i <= k; ++i)     
                s.insert(a[i]);       

            while (s.size() > 1)
            {
                auto it1 = s.begin();
                auto it2 = next(it1);
                auto it3 = prev(s.end());

                ll x = *it1;
                ll y = *it2;
                ll z = *it3;

                s.erase(it1);
                s.erase(it2);
                s.erase(it3);

                s.insert(x + y - z);
            }

            cout << *s.begin() << ' ';
        }
        cout << '\n';
    }
    return 0;
}
