#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int res =a+c;
    int res2 = b+d;
   // cout<<res<<" "<<res2<<endl;
    if(res>res2)cout<<"Dominater"<<endl;
    else cout<<"Everule"<<endl;
}
