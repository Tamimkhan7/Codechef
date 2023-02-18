#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,res;
    cin>>n;
    int arr[n];

    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    if(n%2==0)
    {
        res = (n/2)-1;
    }
    else
    {
        res = n/2;
    }
    //cout<<arr[res]<<endl;
    for(int i=0; i<n; i++)
    {
        if(arr[res]<=arr[i])
        {
            c++;
        }
    }
    int k = c*arr[res];
    cout<<k<<endl;


}
