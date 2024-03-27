#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        for (int i = 0; i < (1 << n); i++) // that means amra 1<<2 je kotha ar n ar 2 power oi akhn ai kotha
        {
            for (int j = 0; j < n; j++)
            {
                if (i & (1 << j))
                {
                    cout << s[j];
                }
            }
            cout << endl;
        }
    }
}