#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    string s;
    cin >> s;
    unordered_map<char, int> mp;
    for (auto c : s)
        mp[c]++;
    bool ok = false;
    if (mp['L'] == 0 and !ok)
    {
        mp['L']++;
        ok = true;
        s.insert(s.begin(), 'L');
    }
    if (mp['C'] == 0 and !ok)
    {
        mp['C']++;
        ok = true;
        s.push_back('C');
    }
    if (mp['T'] == 0 and !ok)
    {
        mp['T']++;
        s.push_back('T');
        ok = true;
    }
    if (!ok)
        s.insert(s.begin(), 'L');
    show(s);
    long long ans = 0;
    long long cntL = 0, cntLC = 0;
    for (auto c : s)
    {
        if (c == 'L')
            cntL++;
        else if (c == 'C')
            cntLC += cntL;
        else if (c == 'T')
            ans += cntLC;
        show(c);
        show(ans);
    }
}