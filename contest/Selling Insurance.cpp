#include <bits/stdc++.h>
using namespace std;
int solve(double p)
{
    int ans = 0;
    double k = 100.0;
    while (k > 0)
    {
        ans++;
        k -= p;
    }
    return ans;
}
int main()
{
    float ans = 20.0 / 100.0;
    int t;
    cin >> t;
    while (t--)
    {
        double x;
        cin >> x;
        double p = (x * ans);
        cout << solve(p) << endl;
    }
}
