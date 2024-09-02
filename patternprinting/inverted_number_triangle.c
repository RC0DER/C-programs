/*print inverted number triangle*/
#include<stdio.h>
int main()
{ 
  int n,i,j,a;
  printf("enter number of rows/column");
  scanf("%d",&n);
  a=n;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=a;j++)
    {
        printf("%d ",j);
    }
    printf("\n");
    a--;
  }
  return 0;
}