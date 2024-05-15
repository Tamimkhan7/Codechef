#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define mod 1000000007
const int N = 2e5 + 9;

int a[N], pre[N];

int main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        for (int i = 1; i <= n; i++)     
            cin >> a[i]; 

        sort(a + 1, a + n + 1, greater<int>());

        for (int i = 1; i <= n; i++)      
            pre[i] = pre[i - 1] + a[i];


        while (q--)
        {
            int k;
            cin >> k;
            ll res = pre[k];
            if (k % 2 == 0)  
                res -= 2 * a[k];     
            cout << res << '\n';
        }
    }
    return 0;
}
