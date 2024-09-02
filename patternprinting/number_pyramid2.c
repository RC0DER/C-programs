//1234321
//123 321
//12   21
//1     1
#include<stdio.h>
int main()
{ 
    int n,i,j;
    printf("enter number of rows/column: ");
    scanf("%d",&n);
    int a=1;
    for(j=1;j<=2*n-1;j++)
    {
        if(j<=n)
        {
            printf("%d",j);
        }
        else
        {
            printf("%d",n-a);
            a++;
        }
    }
    printf("\n");
    for(i=1;i<=n-1;i++)
        {
            for(j=1;j<=n-i;j++)
            {
                printf("%d",j);
            }
            for(j=1;j<=2*i-1;j++)
            {
                printf("_");
            }
            for(j=1;j<=n-i;j++)
            {
                printf("%d",n+1-i-j);
            }
            printf("\n");
        }
    return 0;
}
