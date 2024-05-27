#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arr[m*2];
        for(int i=0;i<m*2;i++)
        {
            cin>>arr[i];
        }
        if(n>m)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    } 
    return 0;
}