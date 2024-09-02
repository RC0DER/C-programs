/*print odd number triangle*/
#include<stdio.h>
int main()
{ 
  int n,i,j;
  printf("enter number of rows/column");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    {
        printf("%d ",2*j-1);
    }
    printf("\n");
  }
  return 0;
}