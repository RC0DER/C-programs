/*Pascal triangle (but not good method)*/
#include<stdio.h>
int fact(int n)
{
    int i,f=1;
    for(i=n;i>0;i--)
    {
        f=f*i;
    }
    return f;
}
int c(int n ,int r)
{
    int ncr;
    ncr= (fact(n))/((fact(r))*(fact(n-r))); //combination
    return ncr;
}
int main()
{
    int n,i,j,p;
    printf("Enter the nuber of rows");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            p=c(i,j);
            printf("%d ",p);
        }
        printf("\n");
    }
    return 0;
}