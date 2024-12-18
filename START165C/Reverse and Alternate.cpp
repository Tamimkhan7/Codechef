#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define all(x) (x).begin(), (x).end()
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
        string s;
        cin >> s;

        int c1 = 0, c0 = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s.substr(i, 2) == "11")
                c1++;
            else if (s.substr(i, 2) == "00")
                c0++;
        }
        if ((c1 == 0 and c0 == 0) || (c0 == 1 and c1 == 1))
            cout << "Yes" << '\n';
        else if (c1 > 1 || c0 > 1)
            cout << "No" << '\n';
        else
        {
            if (c0 == 1)
            {
                if (s[0] == '1' || s[n - 1] == '1')
                    cout << "Yes" << '\n';
                else
                    cout << "No" << '\n';
            }
            else                                                 
            {
                if (s[0] == '0' || s[n - 1] == '0')
                    cout << "Yes" << '\n';
                else
                    cout << "No" << '\n';
            }
        }
    }
    return 0;
}
