#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++)cin>>a[i];
    int ct=0;
    for(int i=0; i<=n-k; i++)
    {
        for(int j=i; j<i+k; j++)
        {
            if(a[j]%2)
            {
                ct++;
                break;
            }
        }
    }
    cout<<ct<<endl;

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
