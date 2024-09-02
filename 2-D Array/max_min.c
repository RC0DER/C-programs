/*Find the max. and min. in 2-D array*/
#include<stdio.h>
int main()
{
    int m,n;
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
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    int max=mat[0][0],min=mat[0][0],r1=0,c1=0,r2=0,c2=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(mat[i][j]>=max){
                max=mat[i][j];
                r1=i;
                c1=j;
            }
            if(mat[i][j]<=min){
                min=mat[i][j];
                r2=i;
                c2=j;
            }
        }
    }
    printf("Max. value = %d at index = [%d][%d]\n",max,r1,c1);
    printf("Min. value = %d at index = [%d][%d]",min,r2,c2);
    return 0;
}