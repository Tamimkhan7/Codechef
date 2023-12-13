#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n),s(n);
    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
    }
    for(int i=1; i<=n; i++)
    {
        cin>>s[i];
    }
    int sum =0,ans=-1,x=1;
    for(int i=1; i<=n+1; i++)
    {
        if(v[i]==v[i+1])
        {
            ans = max (s[i], s[i+1]);
        }
        else
        {
            if(ans>0)
            sum += ans;
        }
    }
    if(v[n] != v[n-1])sum += s[n];
    cout<<sum<<'\n';
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
