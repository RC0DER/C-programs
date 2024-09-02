/*Write a program to print the row number having the max.
sum in a given matrix.*/
#include<stdio.h>
int main()
{
    int m,n,max_sum=0,idx=0;
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
    printf("row %d has max sum that is %d\n",idx,max_sum);
    return 0;
}