#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

long long digitalRootSum(long long N)
{
    long long full_cycles = N / 9;
    long long remainder = N % 9;
    long long sum_full_cycles = full_cycles * 45;
    long long sum_remainder = (remainder * (remainder + 1)) / 2;
    return sum_full_cycles + sum_remainder;
}

int main()
{
    MTK;
    int T;
    cin >> T;
    while (T--)
    {
        long long N;
        cin >> N;
        cout << digitalRootSum(N) << endl;
    }
    return 0;
}
