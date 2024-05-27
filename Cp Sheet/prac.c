#include <stdio.h>
#include <string.h>

int digitsum(int n)
{
    while (n > 9)
    {
        n = n % 10 + n / 10;
    }
    return n;
}

int sum(char s[])
{
    int sum = 0;
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            sum += s[i] - 'a' + 1;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            sum += s[i] - 'A' + 1;
        }
    }
    return sum;
}

int main()
{

    char str1[20], str2[20];
    fgets(str1, 20, stdin);
    int s = sum(str1);
    fgets(str2, 20, stdin);
    int s2 = sum(str2);
    int a = digitsum(s);
    int b = digitsum(s2);
    // float ans;
    // if (a > b)
    // {
    //     ans = ((float)b / a) * 100.00;
    // }
    // else
    // {
    //     ans = ((float)a / b) * 100.00;
    // }
    // printf("%.2f", ans);
    printf("%d %d",s,s2);
    return 0;
}
