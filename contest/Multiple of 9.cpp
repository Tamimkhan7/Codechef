#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
void sovle()
{
    int n;
    cin>>n;
    string s,ss,k;
    cin>>s;
    int count_digit=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]>'0' && s[i]<='9')
        {
            ss += s[i];
            count_digit++;
        }
    }
    int ans;
    stringstream x;
    x<<ss;
    x>>ans;
int digit = n-count_digit;
    cout<<ans<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--)sovle();
}
