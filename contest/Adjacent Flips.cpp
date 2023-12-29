#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int zero_count=0, one_count=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='0')zero_count++;
        else one_count++;
    }
    if(one_count==1 && zero_count==1)cout<<"NO"<<endl;
    else if(zero_count%2==0 && one_count%2==0 || n==one_count || n==zero_count || ((n-one_count)==1)||((n-zero_count)==1) )cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
