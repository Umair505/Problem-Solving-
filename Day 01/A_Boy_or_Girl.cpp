#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    set<int>my;
    int n = s.size();
    for(int i=0;i<n;i++)
    {
        my.insert(s[i]);
    }
    if(my.size()%2==0)cout<<"CHAT WITH HER!"<<endl;
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}
