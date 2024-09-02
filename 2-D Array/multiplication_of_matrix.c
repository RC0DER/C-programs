#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],m,n,p,q,i,j,k;
    printf("Enter the raw and column of matrix a :");
    scanf("%d%d",&m,&n);
    printf("\nEnter the elements of Matrix a\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter the raw and column of matrix b :");
    scanf("%d%d",&p,&q);
    printf("\nEnter the elements of Matrix b\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(n!=p)
    {
        printf("\ntmse na ho paega");
    }
    else
    {
        printf("\nElement of multiplication of matrix a and b\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                c[i][j]=0;
                for(k=0;k<n;k++)
                {
                    c[i][j]+=a[i][k]*b[k][j];
                }
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}