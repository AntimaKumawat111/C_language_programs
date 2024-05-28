// Question - Check entered number is prime or not

// Answer-
// Prime number - Which cannot be divided by a number other than 1 or itself
#include <stdio.h>
int main()
{
    int number, i;
    printf("Enter no.\n");
    scanf("%d", &number);
    for (i = 2; i < number; i++)
        if (number % i == 0)
            break;

    if (i == number)
        printf("%d - Prime no.\n", number);
    else
        printf("%d - Not a prime no.\n", number);
    return 0;
}