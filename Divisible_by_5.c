/*To find whether the given number is divisible by 5 or not*/
#include<stdio.h>
int main()
{
    int a;
    printf("Input the digit:");
    scanf("%d",&a);
    if (a%5==0)
    {
        printf("It is divisible by 5\n");
    }
    else 
    {
        printf("It is not divisible by 5");
    }
    return 0;
}