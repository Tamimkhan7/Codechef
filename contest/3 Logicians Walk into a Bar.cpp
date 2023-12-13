#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0; i<n-1; i++)
        {
            if(s[i]=='1')
            {
                cout<<"IDK\n";
            }
            else
            {
                for(int k=i; k<n; k++)
                {
                    cout<<"NO\n";
                }
                goto end;
            }
        }
        if(s[n-1]=='1')
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
end:
        ;
    }
    return 0;
}
