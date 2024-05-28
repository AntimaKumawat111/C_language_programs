#include <stdio.h>
int main()
{
    int i, a = -1, b = 1, c;
    printf("fibonacci series is ");
    for (i = 1; i <= 6; i++)
    {
        c = a + b;
        printf(" %d ", c);
        a = b;
        b = c;
    }
    
    return 0;
}
