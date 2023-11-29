#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,n;
        cin>>x>>n;
        int ans = 100*x;
        if(ans>n)cout<<0<<'\n';
        else
        {
            int res = n-ans;
            int ss = res/100;
            if(res%100==0)cout<<ss<<'\n';
            else cout<<ss+1<<'\n';
        }
    }
}

