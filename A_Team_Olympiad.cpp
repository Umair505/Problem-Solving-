#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n+1);
    vector<int>v2;
    vector<int>v3;
    vector<int>v4;
    int a=0,b=0,c=0;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        if(v[i]==1)
        {
            a++;
            v2.push_back(i);
        }
        else if(v[i]==2)
        {
            b++;
            v3.push_back(i);
        }
        else
        {
            c++;
            v4.push_back(i);
        }

    } 
    if(a==0 || b==0 || c==0)
    {
        cout<<0<<endl;
        return 0;
    }
    int ans = min(a,min(b,c));
    cout<<ans<<endl;
    for(int i=0;i<ans;i++)
    {
        cout<<v2[i]<<" "<<v3[i]<<" "<<v4[i]<<endl;
    }

    return 0;
}