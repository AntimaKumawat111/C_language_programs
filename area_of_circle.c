#include <stdio.h>
int main()
{
    int radious;
    printf("Enter radious of a circle : ");
    scanf("%d", &radious);
    float value = 3.14 * radious * radious;
    printf("The area of circle is %f", value);
    
    return 0;
    
}