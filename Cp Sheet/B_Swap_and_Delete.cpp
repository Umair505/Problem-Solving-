#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n = s.size();
        int cnt1 = 0,cnt0 = 0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')cnt1++;
            else cnt0++;
        }
        
            for(int i=0;i<n;i++)
            {
                if(s[i]=='1')
                {
                    if(cnt0>0)cnt0--;
                    else break;
                }
                else
                {
                    if(cnt1>0)cnt1--;
                    else break;
                }
            }
            cout<<cnt1+cnt0<<endl;
        
    }
}