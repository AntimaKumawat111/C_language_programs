#include <stdio.h>
int main()
{
    int num;
    printf("Enter a no.\n");
    scanf("%d", &num);
    int x = num, i, r;
    for (i = 0; x != 0; i++)
    {
        r = x % 10;
        printf("%d", r);
        x = x / 10;
    }
    
    return 0;
}