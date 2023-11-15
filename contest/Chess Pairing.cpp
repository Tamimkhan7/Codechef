#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,x;
        cin>>n>>x;
        if(x>n)cout<<(x-n)*2<<endl;
        else cout<<0<<endl;
    }
}
