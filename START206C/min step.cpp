#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        ll N, D;
        cin >> N >> D;
        ll steps = 0;
        if(D == 1){
            ll x = N;
            while(x > 1){
                if(x % 2 == 0) x /= 2;
                else x -= 1;
                steps++;
            }
            cout << steps << "\n";
        } else {
            // fallback BFS for general D > 1
            queue<pair<ll,ll>> q;
            unordered_set<ll> vis;
            q.push({N,0});
            vis.insert(N);
            bool found = false;
            while(!q.empty()){
                auto [x, s] = q.front(); q.pop();
                if(x==1){ cout << s << "\n"; found=true; break;}
                if(x % 2 == 0 && !vis.count(x/2)) { q.push({x/2, s+1}); vis.insert(x/2);}
                if(x > D && !vis.count(x-D)) { q.push({x-D, s+1}); vis.insert(x-D);}
            }
            if(!found) cout << -1 << "\n";
        }
    }
    return 0;
}
