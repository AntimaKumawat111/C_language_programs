// factroial means: - ex - 5 ka fact.= 5*4*3*2*1
// fact ki value starting me 1 hi likhi jati h , 0 nhi ,kyoki kisi bhi no ko 0 se multipie krne pr 0 hi ans.aa jayega

#include <stdio.h>
int main()
{
    int num;
    int fact = 1;
    printf("enter a no.\n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
        fact = fact * i;
    printf("The factorial of this no. is = %d\n", fact);
    return 0;
}