#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n>=1 && n<=10)
        {
            cout<<n<<endl;
        }
        if(n>10 && n<99)
        {
            int ans = n/10;
            cout<<ans+9<<endl;
        }
        if(n>=100 && n<=999)
        {
            int ans = n/100;
            cout<<ans+18<<endl;
        }
        if(n>=1000 && n<=9999)
        {
            int ans = n/1000;
            cout<<ans+27<<endl;
        }
        if(n>=10000 && n<=99999)
        {
            int ans = n/10000;
            cout<<ans+36<<endl;
        }
        if(n>=100000 && n<=999999)
        {
            int ans = n/100000;
            cout<<ans+45<<endl;
        }

    } 
    return 0;
}