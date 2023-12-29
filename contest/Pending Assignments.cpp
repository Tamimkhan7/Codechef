#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        long long ans = x*y;
        long long res = z*24*60;
        if(ans<=res)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
