#include<stdio.h>
int fibo(int x)
{
    if (x<=2) return 1;
    return fibo(x-1)+fibo(x-2);
}
int main()
{
    int n,a;
    printf("Enter the number : ");
    scanf("%d",&n);
    a=fibo(n);
    printf("\n%d",a);
    return 0;
}