/*print star triangle right to left*/
#include<stdio.h>
int main()
{ 
  int n,i,j;
  printf("enter number of rows/column: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n-i;j++)
    {
        printf(" ");
        
    }
    for(j=n-i;j<n;j++)
    {
        printf("*");
        
    }   
    printf("\n");
  }
  return 0;
}