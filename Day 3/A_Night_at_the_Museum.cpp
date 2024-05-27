#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string s;
    cin >> s;
    int sum = 0;
    char a = s[0]; 
    if (abs(a - 'a') > 13)
    {
        sum += 26 - abs(a - 'a');
    }
    else
        sum += abs(a - 'a');
    for(int i = 0; i < s.size() -1; i++) 
    {
        if (abs(s[i] - s[i + 1]) > 13) 
        {
            sum += 26 - abs(s[i] - s[i + 1]);
        }
        else
            sum += abs(s[i] - s[i + 1]);
    }
    cout<<sum<<endl;
    return 0;
}
