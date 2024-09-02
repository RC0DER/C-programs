/*To find whether the mentioned year is a leap year or not*/
#include<stdio.h>
int main()
{
    int Year;
    printf("Input the Year:");
    scanf("%d",&Year);
    if (Year%4==0||Year%400==0)
    {
        printf("Leap Year\n");
    }
    else 
    {
        printf("not leap year");
    }
    return 0;
}