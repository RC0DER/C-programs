//ABCDEFG
//ABC EFG
//AB   FG
//A     G
#include<stdio.h>
int main()
{ 
    int n,i,j;
    printf("enter number of rows/column: ");
    scanf("%d",&n);
    for(j=1;j<=2*n-1;j++)
    {
        printf("%c",j+64);
    }
    printf("\n");
    for(i=1;i<=n-1;i++)
        {
            for(j=1;j<=n-i;j++)
            {
                printf("%c",j+64);
            }
            for(j=1;j<=2*i-1;j++)
            {
                printf(" ");
            }
            for(j=1;j<=n-i;j++)
            {
                printf("%c",n-1+i+j+64);
            }
            printf("\n");
        }
    return 0;
}
