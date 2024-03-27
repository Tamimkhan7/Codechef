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
        int arr[n];
        for (int = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        int maxi = arr[0];
        int mini = arr[0];
        for (int = 1; i <= n; i++)
        {
            if (maxi < arr[i])
            {
                maxi = arr[i];
            }
            else if (mini > arr[i])
            {
                mini = arr[i];
            }
            int sum = (maxi + mini) / 2;
        }
        int p = 0, k = 0;
        for (int = 1; i <= n; i++)
        {
            if (sum < arr[i])
            {
                p += arr[i] - sum;
            }
            else
            {
                k += sum - arr[i];
            }
        }
    }
}