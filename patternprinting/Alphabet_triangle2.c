/*print inverted alphabet triangle*/
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
    for(j=1+64;j<=i+64;j++)
    {
        printf("%c",j);
        
    }   
    printf("\n");
  }
  return 0;
}