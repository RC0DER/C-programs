/*print Alphabet pyramid*/
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
    for(j=1;j<=2*i-1;j++)
    {
        char c=(j+64);
        printf("%c",c);
        c++;
    }   
    printf("\n");
  }
  return 0;
}