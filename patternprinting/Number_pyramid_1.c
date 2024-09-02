//1234567
//123 567
//12   67
//1     7
#include<stdio.h>
int main()
{ 
    int n,i,j;
    printf("enter number of rows/column: ");
    scanf("%d",&n);
    for(j=1;j<=2*n-1;j++)
    {
        printf("%d",j);
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
                printf(" ");
            }
            for(j=1;j<=n-i;j++)
            {
                printf("%d",n-1+i+j);
            }
            printf("\n");
        }
    return 0;
}
