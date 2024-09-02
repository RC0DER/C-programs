/*Factorial from function*/
#include<stdio.h>
int fact(int x)
{
    int i,c=1;
    for(int i=x;i>=1;i--)
    {
        c*=i;
    }
    return c;
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("\nFactorial of %d is %d",n,fact(n));
    return 0;
}