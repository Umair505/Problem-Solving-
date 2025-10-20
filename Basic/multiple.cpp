#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<i<<": ";
        for(int j=i;j<=n;j=j+i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    } 
    return 0;
}