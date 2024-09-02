/*To find whether the given number is even or odd*/
#include<stdio.h>
int main()
{
    int a;
    printf("Input the digit:");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("It is an even number\n");
    }
    else 
    {
        printf("It is an odd number");
    }
    return 0;
}