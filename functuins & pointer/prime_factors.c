/*Find prime factors*/
#include<stdio.h>
int min(int c, int d)
{
    int q;
    if(c<d)
    {
        q=c;
    }
    else
    {
        q=d;
    }
    return q;
}
int pr(int x)
{
    int i;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            return 0;
        }
    }
    return 1;
}
void fact(int x, int y)
{
    int i;
    for(int i=2;i<=min(x,y);i++)
    {
       if(x%i==0 && y%i==0 && pr(i))
       {
         printf("%d ",i);
       }
    }
    return ;
}
int main()
{
    int a,b;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    fact(a,b);
    return 0;
}