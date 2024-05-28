// Question - Is 3 and 7 are Co-Prime numbers ?

// Co-Prime Numbers - Those numbers which do not have any common multiple

#include <stdio.h>
int main()
{
    int i, a = 3, b = 7, c = a < b ? a : b;
    for (i = 2; i <= c; i++)
        if (a % i == 0 && b % i == 0)
            break;
    if (i = c + 1)
        printf(" %d and %d are co-prime no ", a, b);
    else
        printf(" %d and %d are not  co-prime no ", a, b);
        
    return 0;
}
