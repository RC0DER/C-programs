/*To Determine whether the number is divisible by 5 and three or not*/
#include<stdio.h>
int main()
{
    int Number ;
    printf("Input the Number:");
    scanf("%d", &Number);
    if (Number % 5 == 0 && Number % 3 == 0)
    {
        printf("\nNumber %d is Divisible ",Number);
    }
    else 
    {
        printf("\nNumber %d is not a three digit number",Number);
    }
    return 0;
}