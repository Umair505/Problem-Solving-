#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    bool found = false;

    for (int i = 0, j = s2.size() - 1; i < s1.size() && j >= 0; i++, j--) {
        if (s1[i] != s2[j]) { 
            found = false;
            break;
        } else {
            found = true;
        }
    }

    if (found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
