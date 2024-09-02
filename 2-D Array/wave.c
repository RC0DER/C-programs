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
    printf("In wave form\n");
    for(int i=0;i<m;i++)
    {
        if(i%2==0){
            for(int j=0;j<n;j++)
            {
                printf("%d ",mat[i][j]);
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                printf("%d ",mat[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}