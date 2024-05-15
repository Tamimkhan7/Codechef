#include <bits/stdc++.h>
using namespace std;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int cnt = 0;
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            if (s[i] == s[i + 1])
            {
                cnt++;
                i++;
            }
            else
                cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}
