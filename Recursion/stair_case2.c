#include<stdio.h>
int ways(int x)
{
    int up;
    if (x<=2) return x;
    else if(x==3) return x+1;
    up=ways(x-1)+ways(x-2)+ways(x-3);
    return up;
}
int main()
{
    int n,a;
    printf(" Total number of steps : ");
    scanf("%d",&n);
    a=ways(n);
    printf("\nTotal number of ways : %d",a);
    return 0;
}