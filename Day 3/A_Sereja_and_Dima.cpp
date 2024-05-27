#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    } 
    int l = 0, r = n-1;
    int w = 0;
    int sereja = 0,dima = 0;
    while(l<=r)
    {
        if(w%2==0)
        {
            if(a[l]>a[r])
            {
                sereja += a[l];
                l++;
            }
            else
            {
                sereja +=a[r];
                r--;
            }
        }
        else 
        {
            if(a[l]>a[r])
            {
                dima += a[l];
                l++;
            }
            else
            {
                dima += a[r];
                r--;
            }
        }
        w++;
    }
    cout<<sereja<<" "<<dima;
    return 0;
}