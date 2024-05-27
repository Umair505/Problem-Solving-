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
        for (int i = 0; i < n; i++)
            cin >> v[i];
        if (k >= 2)
            cout << "YES" << endl;
        else
        {
            if (k == 1)
            {
                vector<int> ans = v;
                sort(ans.begin(),ans.end());
                if (ans == v)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
    }
    return 0;
}