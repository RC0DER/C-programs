/*WAP to store 10 at every index of a 2D matrix with 5 rows
and 5 column*/
#include<stdio.h>
int main()
{
    int mat[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            mat[i][j]=10;
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}