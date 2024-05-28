// palindrom :- wo numbers jinko sidha ya ulta likhne pr same hi hote h

#include <stdio.h>
int reverseNumber();

int main()
{
    int num;
    printf("Enter no. for check palindrom\n");
    scanf("%d", &num);
    int a = reverseNumber(num);
    if (a == num)
        printf("Yes , This no. is palindrom no.\n");
    return 0;
}

int reverseNumber(int num)
{
    int x = num;
    int reverse = 0;
    for (int i = 1; x > 0; i++)
    {
        int r = x % 10;
        reverse = reverse * 10 + r; //
        x = x / 10;
    }
    printf("%d \n", reverse);
    if (reverse == num)
        return reverse;
    else
        printf("not palindrom ");
        
}
