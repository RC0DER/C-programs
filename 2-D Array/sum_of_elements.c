/*Sum of all element of matrix*/
#include<stdio.h>
int main()
{
    int m,n,sum=0;
    printf("Enter the Row of array\n");
    scanf("%d",&m);
    printf("Enter the column of array\n");
    scanf("%d",&n);
    int mat[m][n];
    printf("Enter the elements of Matrix\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("The given matrix\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d",mat[i][j]);
        }
        printf("\n");
    }
    printf("Sum of elements of matrix\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum+=mat[i][j];
        }
    }
    printf("Sum = %d\n",sum);
    return 0;
}