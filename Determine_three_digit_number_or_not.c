/*To Determine whether the number is three digit or not*/
#include<stdio.h>
int main()
{
    int Number ;
    printf("Input the Number:");
    scanf("%d", &Number);
    if (Number > 99 && Number < 1000)
    {
        printf("\nNumber %d is a three digit number",Number);
    }
    else 
    {
        printf("\nNumber %d is not a three digit number",Number);
    }
    return 0;
}