#include <bits/stdc++.h>
using namespace std;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
const int N = 1005;
char a[N][N];
int pre[N][N];
int main()
{
    MTK;
int x,y;cin>>x>>y;
int ans = x*2+y*2;
if(ans>=1000)cout<<"YES"<<'\n';
else cout<<"NO"<<'\n';

    return 0;
}
