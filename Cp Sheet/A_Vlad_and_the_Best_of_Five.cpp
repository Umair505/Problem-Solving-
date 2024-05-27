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
        int cnt1 = 0,cnt2=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='A')cnt1++;
            else if(s[i]=='B')cnt2++;
        }
        if(cnt1>cnt2)cout<<'A'<<endl;
        else cout<<'B'<<endl;
    } 
    return 0;
}