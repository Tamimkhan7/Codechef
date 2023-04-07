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
        int k = n / 3;
        int p = n - (k * 3);
        if (p == 0)
            cout << p << endl;
        else
            cout << 3 - p << endl;
    }
}