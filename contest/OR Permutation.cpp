#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>p;
    for (int i=n; i>=1; i-=2)
    {
        p.push_back(i);
    }
    for (int i=n-1; i>=1; i-=2)
    {
        p.push_back(i);
    }
    for(int i=0; i<n; i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;

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
