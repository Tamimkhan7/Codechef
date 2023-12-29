#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,c,d,k;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        c = a;
        d = b;
        while(c != d)
        {
            if(c>d)
            {
                c -= d;
            }
            else if(c<d)
            {
                d -= c;
            }
        }
        cout<<c<<" ";
        k = (a*b)/c;
        cout<<k<<endl;
    }
    //cout<<endl;
}
