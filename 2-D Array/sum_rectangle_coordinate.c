/*Sum of all element of matrix*/
#include<stdio.h>
int main()
{
    int m,n,sum=0,x1,y1,x2,y2;
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
    printf("Starting coordinate for sum\n");
    scanf("%d %d",&y1,&x1);
    printf("Ending coordinate for sum\n");
    scanf("%d %d",&y2,&x2);
    printf("Sum of elements of matrix\n");
    for(int i=y1;i<=y2;i++)
    {
        for(int j=x1;j<=x2;j++)
        {
            sum+=mat[i][j];
        }
    }
    printf("Sum = %d\n",sum);
    return 0;
}