/*print Hollow rectangle with star*/
#include<stdio.h>
int main()
{ 
  int m,n,i,j;
  printf("enter number of rows: ");
  scanf("%d",&m);
  printf("enter number of column: ");
  scanf("%d",&n);
  for(i=1;i<=m;i++)
  {
    for(j=1;j<=n;j++)
    {
        if (i==1 || j==1 || i==m || j==n)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }   
        }
        printf("\n");
  }
  return 0;
}