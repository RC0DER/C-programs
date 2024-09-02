/*user input -> no. of student
marks of P,C,M*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of students");
    scanf("%d",&n);
    int res[n][4];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&res[i][j]);
        }
    }
    printf("\nThe marks of (PCM) of students following with Roll no.");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}