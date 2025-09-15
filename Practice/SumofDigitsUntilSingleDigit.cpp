// Task: Keep summing the digits of N until the result is a single digit.
// Example: 9875 → 9+8+7+5 = 29 → 2+9 = 11 → 1+1 = 2

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int sum = 0;

    while (true)
    {
        int tmp = n % 10;
        sum += tmp;
        n = n / 10;
        if (n == 0 && sum > 9)
        {
            n = sum;
            sum = 0;
        }
        if (n == 0 && sum <= 9)
            break;
    }
    cout << sum;
    return 0;
}
