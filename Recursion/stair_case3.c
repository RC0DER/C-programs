/*Number of ways to climb a stair*/
#include<stdio.h>
int a(int i)
{
    int k=0;
    for (int j=3;j<=i;j++)
    {
        k=k+1;
    }
    return k;
}
int ways(int x, int y)
{
    int up=0,i,k=0;
    for(i=1;i<=y;i++)
    {
        if(x<=2) return x;
        else if(i>=3)
        {if(x<=i) return x+a(i);}
        up+=ways(x-i,y);
    }
    return up;
}
int main()
{
    int n,m,a;
    printf(" Total number of steps : ");
    scanf("%d",&n);
    printf("\nMax number of steps in a step :");
    scanf("%d",&m);
    a=ways(n,m);
    printf("\nTotal number of ways : %d",a);
    return 0;
}