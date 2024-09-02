/*: Take positive integer input and tell if it 
is divisible by 5 or 3 but not divisible by 15*/
#include<stdio.h>
int main()
{
   int n ;

    printf("A positive number n:");
    scanf("%d", &n);

    if (n%3==0 || n%5==0 && n%15!=0)
    {
        printf("\nKhush kya mila ye kara ke");
    }
    else 
    {
        printf("\n le bhai galat h ");
    }
    return 0;
}