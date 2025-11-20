#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cnt[n+1];
    memset(cnt,0,sizeof(cnt));
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j=j+i)
        {
            cnt[j]++;
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<i<<" : "<<cnt[i]<<endl;
    }
    return 0;
}