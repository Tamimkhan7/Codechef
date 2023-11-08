#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    int ans=0;
    for(int i=0; i<=n; i++)
    {
        int res =(i%k)*((n-i)%k);
        cout<<res<<" ";
        if(res==i)ans++;
    }
    cout<<endl;
    // cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
