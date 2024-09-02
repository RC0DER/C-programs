/*sum of digits of given number*/
#include<stdio.h>
int main()
{
    int n,sum=0,m;
    printf("Enter the digit: ");
    scanf("%d",&n);
    while(n>0)
    {
        m=n%10;
        sum=sum+m;
        n=n/10;
    }
    printf("sum of digits of given number: %d",sum);
    return 0;
}