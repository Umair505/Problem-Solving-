#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,b;
    cin>>l>>b;
    int cnt = 0;
    while(true)
    {
        l=l*3;
        b=b*2;
        cnt++;
        if(l>b)break;
    }
    cout<<cnt<<endl;
    return 0;
}