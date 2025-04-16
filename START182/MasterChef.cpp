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

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int cnt = 0, cnt2 = 0;
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                cnt++;
                cnt2 = 0;
            }
            else
            {
                cnt2++;
                cnt = 0;
            }
            if (cnt == k || cnt2 == k)
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            cout << "YES\n";
            continue;
        }
        cnt = 0, cnt2 = 0;
        int front = 0, back = n - 1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                cnt++;
                cnt2 = 0;
            }
            else
            {
                cnt2++;
                cnt = 0;
            }
            if (cnt == k || cnt2 == k)
            {
                front = i;
                break;
            }
        }
        cnt = 0, cnt2 = 0;
        for (int i = n - 1; i >= 0 and front < i; i--)
        {
            if (s[i] == 'B')
            {
                cnt++;
                cnt2 = 0;
            }
            else
            {
                cnt2++;
                cnt = 0;
            }
            if (cnt == k || cnt2 == k)
            {
                back = i;
                break;
            }
        }
        show(front), show(back);
        show(s);
        if (front >= back)
        {
            if (front + (k - 1) < n)
            {
                front += (k - 1);
                back += (k - 1);
                while (back < (n - 1))
                    back++;
            }
            else
            {
                back -= (k - 1);
                front -= (k - 1);
                while (front > 0)
                    front--;
            }
        }
        int mx = max(front, back), mn = min(front, back);
        front = mn, back = mx;
        show(front), show(back);
        // if ((front != 0 and back != n - 1) || (front == 0 and back != n - 1) || (front != 0 and back == n - 1))
        reverse(s.begin() + front, s.begin() + back + 1);
        show(s);
        ok = true;
        cnt = 0, cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                cnt++;
                cnt2 = 0;
            }
            else
            {
                cnt2++;
                cnt = 0;
            }
            if (cnt >= k || cnt2 >= k)
            {
                ok = false;
                break;
            }
        }
        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}