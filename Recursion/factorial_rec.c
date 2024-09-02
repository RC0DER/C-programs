/*Factorial of a number with recursion*/
#include<stdio.h>
int fact(int a)
{
    if(a==1 || a==0) return 1;
    int recAns=a*fact(a-1);
    return recAns;
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("\n\aThe factorial of %d is %d",n,fact(n));
    return 0;
}