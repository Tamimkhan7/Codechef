#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    float y, k;
    cin >> x >> y;
    if (x % 5 == 0 && y >= float(x))
    {
        k = (y - x) - 0.5;
        printf("%.2f", k);
    }
    else
    {
        printf("%.2f", y);
    }
}