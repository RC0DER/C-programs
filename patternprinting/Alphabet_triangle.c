/*print alphabet triangle*/
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
        int a=j+64;
        char c=(char)a;
        printf("%c ",c);
    }
    printf("\n");
  }
  return 0;
}