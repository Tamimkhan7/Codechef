#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0;
        cin >> n;
        while (n--)
        {
            int a;
            cin >> a;
            if (a >= 1000)
                c++;
        }
        cout << c << endl;
    }
}