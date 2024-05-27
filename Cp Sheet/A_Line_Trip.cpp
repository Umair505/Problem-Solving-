#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a;
        int p=0;
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            ans = max(ans,a-p);
            p = a;
        }
        int b = 2*(x-p);
        ans = max(b,ans);
        cout<<ans<<endl;
    } 
    return 0;
}