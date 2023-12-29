#include<bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define mod 998244353
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
    string s;
    cin>>s;
    int n = s.size();
    vector<int>v(n+1,1);//vector all element are 1
    for(int i=1; i<n; i++)
    {
        v[i+1]= v[i];
        if(s[i] != s[i-1])
        {
            v[i+1]= (v[i+1]+v[i-1])%mod;//using prefix sum formula
            //cout<<v[i]<<" "<<v[i+1]<<endl;
        }
    }
    cout<<v[n]<<endl;
}

int main()
{
    faster;
    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
