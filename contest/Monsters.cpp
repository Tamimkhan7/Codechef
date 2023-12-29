#include<bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool prime(int n)
{

    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)return false;
    }
    return true;
}

void solve()
{
    int h;
    cin>>h;
    int x=1;
    int ans=0;
    while(h>0)
    {
        if(prime(h))
        {
            h-=h;
            ans++;
        }
        else
        {
            h-=x;
            x*=2;
            ans++;
        }
        if(h<0)
        {
            ans=-1;
            break;
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
