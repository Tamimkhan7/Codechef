#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, Q;
        cin >> N >> Q;

        string S;
        cin >> S;

        int max_len = 0;
        int count = 1;
        for (int i = 1; i < N; ++i)
        {
            if (S[i] == S[i - 1])
            {
                ++count;
            }
            else
            {
                max_len = max(max_len, count);
                count = 1;
            }
        }
        max_len = max(max_len, count);

        cout << max_len << ' ';
        while (Q--)
        {
            char c;
            cin >> c;
            S += c;
            if (c == S[N - 1])
            {
                ++count;
                max_len = max(max_len, count);
            }
            else
            {
                count = 1;
                max_len = max(max_len, count);
            }

            cout << max_len << ' ';
            ++N;
        }

        cout << '\n';
    }

    return 0;
}
