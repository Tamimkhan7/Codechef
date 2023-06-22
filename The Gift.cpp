#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, n, m;
    cin >> x >> n >> m;
    int k = x + m;
    if (k >= n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}