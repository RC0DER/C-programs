/*Fibonacci from factorial*/
#include<stdio.h>
void fib(int x)
{
    int i,c=0,d=1,e;
    printf("%d ",c);
    printf("%d ",d);
    for(int i=3;i<=x;i++)
    {
        e=c+d;
        printf("%d ",e);
        c=d;
        d=e;
    }
    return;
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    fib(n);
    return 0;
}