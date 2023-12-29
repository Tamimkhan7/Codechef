#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
#define ll long long
bool check_palindrom(int n)
{
    string s,ss;
    s= to_string(n);
    ss = s;
    reverse(s.begin(), s.end());
    if(s==ss)return true;
    else return false;
}
bool check_prime(int n)
{
    int flag=0;
    if(n==1)return false;
    if(n==2)return true;
    for(ll i=3; i*i<=n; i+=2)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag)return false;
    else return true;
}
void solve()
{

    int even=0, odd=0;
    for(ll i=11; i<=N; i+=2)
    {
        if(check_palindrom(i)&&check_prime(i))
        {
            ll res = (log10(i))+1;//digit check
            if(res%2==0)even++;
            else odd++;

        }
       // if(even+odd==n)break;
    }
    cout<<even<<" "<<odd<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<5)
            cout<<0<<" "<<n<<endl;

        else cout<<1<<" "<<n-1<<endl;
    }
}
