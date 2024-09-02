/*Pascal triangle (efficient method)*/
#include<stdio.h>
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
        int icj=1;
        for(j=0;j<=i;j++)
        {
            printf("%d ",icj);
            icj=icj*(i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
}