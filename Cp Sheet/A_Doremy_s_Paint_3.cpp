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
        int a[n];
        int cnt = 0;
        int cnt2=0;
        map<int,int> freq;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            freq[a[i]]++;
        }
        if(freq.size()==1)cout<<"Yes"<<endl;
        else if(freq.size()>=3)
        {
            cout<<"No"<<endl;
        }
        else
        {
          vector<int>v;
          for(auto it:freq)
          {
            v.push_back(it.second);
          }
          int ans = abs(v[0]-v[1]);
          if(ans == 1)cout<<"Yes"<<endl;
          else cout<<"No"<<endl;
        }
    } 
    return 0;
}