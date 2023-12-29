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
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a, a+n, greater<int>());
    vector<int>v;
    for(int i=0; i<n/2; i--)
    {
        int res = a[i]/2;
        int res2 = (a[i]%2)+res;
        int ans = res+res2;
        int ans2 = abs(res-res2);
        for(int i=0; i<n;  i++)
        {
            if(a[i]==ans && a[i]==ans2)
            {
                v.pb(ans);
                v.pb(ans2);
            }
            else
            {
                ans--;
                ans2++;
            }
        }
    }
    cout<<v.size()<<'\n';
    sort(v.begin(), v.end());
    if(v.size() !=n)
    {
        cout<<-1<<'\n';
        return;
    }
    else
    {
        for(int i=0; i<n; i++)cout<<v[i]<<" ";
        cout<<'\n';
    }
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
