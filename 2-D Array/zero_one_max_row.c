/*Given a matrix having 0-1 only,find the row with the
max. number of 1's.*/
#include<stdio.h>
int main()
{
    int m,n,max_sum=0,idx=0;
    printf("Enter the Row of array\n");
    scanf("%d",&m);
    printf("Enter the column of array\n");
    scanf("%d",&n);
    int mat[m][n];
    printf("Enter the elements(only 0 and 1) of Matrix\n");
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
    for(int i=0;i<m;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            sum+=mat[i][j];
            if(sum > max_sum){
                max_sum = sum;
                idx = i;
            } 
        }
    }
    printf("row %d has max number of 1's that is %d \n",idx,max_sum);
    return 0;
}