#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        set<ll> blacks;
        for (int i = 0; i < m; i++) {
            ll x; cin >> x;
            blacks.insert(x);
        }

        // সব position track করার জন্য
        set<ll> result = blacks;

        for (int len = 1; len <= n; len++) {
            ll cur = 1;
            for (int i = 0; i < len; i++) {
                if (s[i] == 'A') {
                    cur++;
                } else {
                    // B command
                    ll x = cur + 1;
                    while (blacks.count(x)) x++; // skip already black
                    cur = x;
                }
            }
            // শেষে cur black হবে
            blacks.insert(cur);
            result.insert(cur);
        }

        cout << result.size() << "\n";
        for (auto x : result) cout << x << " ";
        cout << "\n";
    }
}
