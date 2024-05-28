// TAKE SOMEHING , RETURN SOMETHING
// & TAKE SOMEHING ,  RETURN NOTHING both

#include <stdio.h>

void table(int n);
void factorial(int n);
int sum();

int main()
{
    int number;
    printf("Enter no. for table = ");
    scanf("%d", &number);
    table(number);
    factorial(number);
    
    int firstNumber, secondNumber, s;
    s = sum();
    printf("Sum is %d\n", s);

    return 0;
}

int sum()
{
    int firstNumber, secondNumber, s;
    printf(" \nEnter two numbers for sum\n");
    scanf("%d %d", &firstNumber, &secondNumber);
    s = firstNumber + secondNumber;
    return (s);
}

void table(int number)
{
    for (int i = 1; i <= 10; i++)
        printf(" %d\n", i * number);
}

void factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact = fact * i;
    printf("Factorial of %d is = %d", n, fact);
}