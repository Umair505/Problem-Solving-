#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    string s;
    cin>>s;
    int cnt1 = 0,cnt2 = 0 ,cnt3=0,cnt4=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')cnt1++;
        else if(s[i]=='2')cnt2++;
        else if(s[i]=='3')cnt3++;
        else cnt4++;
    } 
    int ans = cnt1 * a + cnt2 * b + cnt3 * c + cnt4 *d;
    cout<<ans;
    return 0;
}