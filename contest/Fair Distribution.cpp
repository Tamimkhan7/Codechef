#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
#define ll long long

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n==1)
    {
        cout<<"YES"<<endl;
        return;
    }
    if(n>1 && n%2==1)
    {
        cout<<"NO"<<endl;
        return;
    }
    int ans=0;
    for(int i=0; i<n; i+=2)
    {
        if(s[i]!= s[i+1])ans++;
    }

    if(ans==n/2)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
