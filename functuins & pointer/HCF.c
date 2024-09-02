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
int HCF(int x, int y)
{
    int i,c;
    for(int i=1;i<=min(x,y);i++)
    {
       if(x%i==0 && y%i==0 )
       {
         c=i;
       }
    }
    return c;
}
int main()
{
    int a,b,c;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    printf("\nHCF = %d",HCF(a,b));
    return 0;
}