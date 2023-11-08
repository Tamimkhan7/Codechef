#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s,ss;
    cin>>s>>ss;
    int chef_point=0, chefina_point=0;
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'R' && ss[i]== 'S')chef_point++;
        else if(s[i]== 'S' && ss[i]== 'R')chefina_point++;
        else if(s[i]=='S' && ss[i]=='P')chef_point++;
        else if(s[i]=='P' && ss[i]=='S')chefina_point++;
        else if(s[i]=='P' && ss[i]=='R')chef_point++;
        else if(s[i]=='R' && ss[i]=='P')chefina_point++;
    }
    //cout<<chef_point<<" "<<chefina_point<<endl;
    if(chef_point>chefina_point)cout<<0<<endl;
    else if(chefina_point==chef_point)cout<<1<<endl;
    else cout<<chefina_point-chef_point<<endl;

      //  int x = (chefina_point+chef_point)/2;

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
