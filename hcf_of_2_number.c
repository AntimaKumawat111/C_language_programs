#include <stdio.h>
int main()
{
    int a, b, h;
    printf("Enter 2 numbers\n");
    scanf("%d%d", &a, &b);
    for (h = a < b ? a : b; h >= 1; h--)
    {
        if (a % h == 0 && b % h == 0)
            break;
    }
    printf(" hcf is %d\n", h);
    return 0;
}
