#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        long long sum = 0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum += a[i];
        }
        sort(a.begin(),a.end());
        if(sum % 2 == 0 || a[n-1] - a[0] - 1 > k || a[n-2] - a[0] > k)
        {
            cout<<"Jerry\n";
        }
        else
        {
            cout<<"Tom\n";
        }

    }
    return 0;
}