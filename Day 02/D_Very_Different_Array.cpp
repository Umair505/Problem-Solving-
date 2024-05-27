#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> v1(n);
        vector<int> v2(m);
        
        // Input for v1 and sort it
        for (int i = 0; i < n; i++)
            cin >> v1[i];
        sort(v1.begin(), v1.end());
        
        // Input for v2 and sort it in descending order
        for (int i = 0; i < m; i++)
            cin >> v2[i];
        sort(v2.begin(), v2.end(), greater<int>());
        
        int i = 0, j = n - 1, l = 0, r = m - 1;
        int ans = 0;
        
        while (i <= j) {
            int left = abs(v1[i] - v2[l]);
            int right = abs(v1[j] - v2[r]); // Corrected to use v2[r]
            int mx = max(left, right);
            ans += mx;
            if (left == mx) {
                i++;
                l++;
            } else if (right == mx) {
                j--;
                r--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
