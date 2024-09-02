/*print Floyd's Triangle*/
#include<stdio.h>
int main()
{ 
  int m,n,i,j,a=1;
  printf("enter number of rows/column: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    {
        printf("%d ",a);
        a++;
    }   
    printf("\n");
    a=a;
  }
  return 0;
}