#include <bits/stdc++.h>
using namespace std;
void solve(int arr[], int n, int h)
{
    int x = 0;
    while (1)
    {
        int p = h;
        for (int i = 0; i < n; i++)
        {
            if (x >= arr[i])
                continue;
            else
                p -= arr[i];
        }
        if (p > 0)
        {
            cout << x << endl;
            return;
        }
        else
        {
            x++;
            p = h;
        }
    }
}
void sol()
{
    int n, h;
    cin >> n >> h;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    solve(arr, n, h);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        sol();
    }
    return 0;
}