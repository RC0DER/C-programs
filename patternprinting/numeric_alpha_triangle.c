/*print numericalpha triangle*/
#include<stdio.h>
int main()
{ 
  int n,i,j;
  printf("enter number of rows/column");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
   if (i%2==0)
   {
    for(j=1;j<=i;j++)
    {
        int a=j+64;
        char c=(char)a;
        printf("%c ",c);
    }
   }
   else
   { for(j=1;j<=i;j++)
    {
        printf("%d ",j);
    }
   }
    printf("\n");
  }
  return 0;
}