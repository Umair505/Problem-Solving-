#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    bool flag = false;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    } 
    
        int minm = INT_MAX;
        for(int i=0;i<n;i++)
        {
            minm = min(minm,abs(v[i]));
        }
        cout<<minm<<endl;

    return 0;
}