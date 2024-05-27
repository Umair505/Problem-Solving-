#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='+')
        {
            for(int j=0;j<s.size();j++)
            {
                if(i!=j)
                {  
                    if(s[i]<s[j])
                    {
                        char tmp = s[i];
                        s[i] = s[j];
                        s[j] = tmp;
                    }
                }
            }
        }
    }
    cout<<s;
    return 0;
}