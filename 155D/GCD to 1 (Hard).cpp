#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n + 2][m + 2];

        int x = 1, y = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (i == x && j == y)
                    a[i][j] = 3;
                else
                    a[i][j] = 2;
            }
            x++, y++;
        }

        for (int i = 1; i <= n; i++)
        {
            int cnt_col = 0;
            for (int j = 1; j <= m; j++)
            {
                if (a[i][j] == 2)
                    cnt_col++;
            }
            if (cnt_col == m)
            {
                int row_x = i, col_y = 1;
                while (a[row_x][col_y] == 3)
                    col_y++;
                a[row_x][col_y] = 3;
            }
        }

        for (int i = 1; i <= m; i++)
        {
            int cnt_row = 0, last_row_with_2 = -1;
            for (int j = 1; j <= n; j++)
            {
                if (a[j][i] == 2)
                {
                    cnt_row++;
                    last_row_with_2 = j;
                }
            }
            if (cnt_row == n)
            {
                int col_x = 1, row_y = i;
                while (a[col_x][row_y] == 3)
                    col_x++;
                a[col_x][row_y] = 3;
            }
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
                cout << a[i][j] << ' ';
            cout << '\n';
        }
    }
    return 0;
}
