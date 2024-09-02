/*To find reverse of the given number*/
#include<stdio.h>
int main()
{
    int n,reverse=0,m;
    printf("Enter the digit: ");
    scanf("%d",&n);
    while(n>0)
    {
        m=n%10;
        reverse=reverse*10+m;
        n=n/10;
    }
    printf("sum of digits of given number: %d",reverse);
    return 0;
}