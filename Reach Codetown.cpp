#include<bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve()
{
    string s;
    cin>>s;
    string sp = "CVCVCVCC";
    string vw;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='A'|| s[i]=='E'|| s[i]=='I' || s[i]=='O' || s[i]=='U')vw +='V';
        else vw += 'C';
    }
   // cout<<vw<<'\n';
    if(vw==sp)cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';

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
