#include<bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve()
{
    int a,b;
    cin>>a>>b;
    int a1=a, b1=b;
    int ans=0;
    if(a>=b)
    {
        while(a%b!=0 && a1%b1 !=0)
        {
            a--;
            b++;
            a1++;
            b1--;
            ans++;
        }
    }
    else
    {
        while(a1%b1!=0)
        {
            ans++;
            a1++;
            b1--;
        }
    }
    cout<<ans<<'\n';


}
int main()
{
    faster;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
