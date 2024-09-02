/*Given a positive integer n, generate a m*n matrix
filled with elements from 1 to m*n in spiral order*/
#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the Row of array\n");
    scanf("%d",&m);
    printf("Enter the column of array\n");
    scanf("%d",&n);
    int arr[m][n];
    printf("Enter the elements of Matrix\n");
    int minr=1,minc=1,maxr=m,maxc=n,tne=m*n,count=1;
    while(count<=tne)
    {
        for(int j=minc;j<=maxc;j++){
            arr[minr][j]=count++;
        }
        minr++;
        if (count>tne) break;
        for(int i=minr;i<=maxr;i++){
            arr[i][maxc]=count++;;
        }
        maxc--;
        if (count>tne) break;
        for(int j=maxc;j>=minc;j--){
            arr[maxr][j]=count++;
        }
        maxr--;
        if (count>tne) break;
        for(int i=maxr;i>=minr;i--){
            arr[i][minc]=count++;
        }
        minc++;
        if (count>tne) break;
    }
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
           printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}