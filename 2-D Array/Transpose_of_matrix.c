/*Transpose of a matrix in separate matrix*/
#include<stdio.h>
int main()
{
    int m,n,max_sum=0,idx=0;
    printf("Enter the Row of array\n");
    scanf("%d",&m);
    printf("Enter the column of array\n");
    scanf("%d",&n);
    int mat[m][n],tmat[m][n];
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
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of given matrix is :\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            tmat[i][j]=mat[j][i];
            printf("%d ",tmat[i][j]);
        }
        printf("\n");
    }
    return 0;
}