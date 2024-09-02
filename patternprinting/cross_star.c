/*print cross with star*/
#include<stdio.h>
int main()
{ 
  int n,i,j;
  printf("enter number of rows/column: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
        if (i==j || j==(n+1)-i)
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