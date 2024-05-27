#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int cnt = 0;
        char s[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> s[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (s[i][j] == '1')
                    cnt++;
            }
            if (cnt == 1)
                break;
            else
                cnt = 0;
        }
        if (cnt == 1)
            cout << "TRIANGLE" << endl;
        else
            cout << "SQUARE" << endl;
    }
    return 0;
}