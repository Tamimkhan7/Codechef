#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >> t;
    while(t--){
        double x,y;cin >> x>>y;
        double res = (0.07*x)+x;
        if(res>=y)cout<<"YES"<<endl;
        else cout<<"NO"<<endl; 
    }
}