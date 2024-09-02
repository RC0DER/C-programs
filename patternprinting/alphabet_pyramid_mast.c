/*print alphabet pyramid*/
#include<stdio.h>
int main()
{ 
  int n,i,j,k=0;
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
        if(i>=j)
        {
            printf("%c",j+64);
        }
        else
        {
            printf("%c",64+(2*i-j));
        }
        
    }   
    printf("\n");
  }
  return 0;
}