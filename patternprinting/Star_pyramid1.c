// *******
// *** ***
// **   **
// *     *
#include<stdio.h>
int main()
{ 
  int n,i,j,nsp,nst,ml;
  printf("enter number of rows/column: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n+1-i;j++)
    {
        printf("*");  
    } 
    if(i>=2)
    {
      for(j=1;j<=i-1;j++)
      {
        printf(" ");  
      } 
      for(j=1;j<=i-2;j++)
      {
        printf(" ");
      }
    }
    if(i==1)
    {
      for(j=1;j<n;j++)
      {
        printf("*");
      }
    }
    if(i>1)
    {
      for(j=1;j<=n+1-i;j++)
      {
        printf("*");  
      } 
    }

    printf("\n");
  }
  return 0;
}