#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int>v(n);
        vector<int>v2(m);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        for(int i=0;i<m;i++)
        cin>>v2[i];
        sort(v2.begin(),v2.end(),greater<int>());
        int i=0,j=n-1,l=0,r=m-1;
        long long sum = 0;
        while(i<=j)
        {
            int left = abs(v[i]-v2[l]);
            int right = abs(v[j]-v2[r]);
            int mx = max(left,right);
            sum +=mx;
            if(left == mx){
                i++;
                l++;
            }
            else if(right == mx)
            {
                j--;
                r--;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}