#include<bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
#define pb push_back
#define pop pop_back()
#define vc v.clear()
#define sz v.size()
#define lc (n*2)
#define rc ((n*2)+1)
void solve()
{
    int n;
    cin>>n;
    int a[n];
    ll total_sum =0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        total_sum ^=a[i];
    }
    //  cout<<total_sum<<'\n';
    if(total_sum==0)
    {
        cout<<0<<'\n';
        return;
    }
    for(int i=0; i<n; i++)
    {
        if(total_sum==a[i])
        {
            cout<<0<<'\n';
            return;
        }
    }
    sort(a, a+n);
    ll res =0;
    ll mn = total_sum;
    int pp = total_sum;
    for(int i=0; i<n; i++)
    {
        pp^=a[i];
        if(mn>=pp)
        {
            mn = pp;
            pp = total_sum;
        }
        else
        {
            pp = total_sum;
        }
    }
    cout<<mn<<'\n';
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
