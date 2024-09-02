/*To find the absolute value of Integer*/
#include<stdio.h>
int main()
{
    int a;
    printf("Input the Integer:");
    scanf("%d",&a);
    if (a<0)
    {
        a = a * (-1);
    }
    printf("The absolute value of given integer is %d",a);
    return 0;
}