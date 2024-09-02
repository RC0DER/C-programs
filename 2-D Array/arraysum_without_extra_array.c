/*Sum of array element without extra array*/
#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the Row of array\n");
    scanf("%d",&m);
    printf("Enter the column of array\n");
    scanf("%d",&n);
    int mat1[m][n],mat2[m][n];
    printf("Enter the elements of Matrix 1\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter the elements of Matrix 2\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("Sum of matrix\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            mat1[i][j]+=mat2[i][j];
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }
    return 0;
}