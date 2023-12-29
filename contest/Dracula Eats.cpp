#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        if (n < 2)
        {
            cout << 0 << endl;
        }
        else
        {
            n -= 2;
            ans++;
            while (n > 6)
            {
                n -= 7;
                ans++;
            }
            cout << ans << endl;
        }
    }
}