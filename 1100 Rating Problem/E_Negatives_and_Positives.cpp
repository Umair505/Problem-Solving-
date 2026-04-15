#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n); 
        ll minm = LLONG_MAX; 
        ll neg = 0; 
        ll ans = 0;

        for (int i = 0; i < n; i++) 
        {
            cin >> v[i]; 
            if (v[i] < 0)
            {
                neg++;
            }
            minm = min(minm, abs(v[i]));
            ans += abs(v[i]);
        }
        if(neg%2==1)
        {
            ans -= 2*minm;
        }
        cout<<ans<<endl;
    }
    return 0;
}
