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
        string s;
        cin>>s;
        int cnt = 0;
        int cnt1=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.')
            {
                cnt++;
            }
            if(s[i]=='.')cnt1++;
        }
        if(cnt>=1)cout<<2<<endl;
        else
        {
            cout<<cnt1<<endl;
        }
       
    } 
    return 0;
}
