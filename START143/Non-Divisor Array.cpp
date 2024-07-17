#include <iostream>
#include <vector>
using namespace std;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    MTK;
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        cout << N << '\n'; 
        for (int i = 1; i <= N; ++i)
        {
            cout << i << ' ';
        }
        cout << '\n';
    }
    return 0;
}
