#include <stdio.h>
int main()
{
    int a, b, c, i;
    printf(" Enter 3 numbers\n");
    scanf("%d%d%d", &a, &b, &c);
    for (i = a < b ? (a < c ? a : c) : (b < c ? b : c); i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0 && c % i == 0)
            break;
    }
    printf(" hcf is %d", i);
    
    return 0;
}