/*print ___****
        __****
        _****
        */
#include<stdio.h>
int main()
{ 
  int n,i,j;
  printf("enter number of rows/column: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n+1-i;j++)
    {
        printf(" ");
        
    }
    for(j=1;j<=n;j++)
    {
        printf("* ");
        
    }   
    printf("\n");
  }
  return 0;
}