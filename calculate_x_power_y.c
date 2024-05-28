#include <stdio.h>
int main()
{
    int a, b, c = 1;
    printf("  Enter a no. and its power\n");
    scanf("%d%d", &a, &b);
    for (int i = 1; i <= b; i++)
        c *= a;
    printf("result is %d", c);
    return 0;
}
