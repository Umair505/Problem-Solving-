#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        if(binary_search(v.begin(),v.end(),k))
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        // for (int i = 0; i < n; i++)
        // {
        //     if (v[i] == k)
        //     {
        //         found = true;
        //         break;
        //     }
        // }
        // if (found==true)
        //     cout << "YES" << endl;
        // else
        //     cout << "NO" << endl;
    }
    return 0;
}