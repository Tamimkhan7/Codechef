#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,x,d;
    cin>>n>>x>>d;
    int res = x*5;
    res = n/res;
    res +=d;
    cout<<res<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
