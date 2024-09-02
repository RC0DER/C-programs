/*print plus with star*/
#include<stdio.h>
int main()
{ 
  int n,i,j;
  printf("enter number of rows/column: ");
  scanf("%d",&n);
  if(n%2!=0)
  {
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if (i==(n+1)/2 || j==(n+1)/2)
            {
                printf("*");
            }
            else
            {
            printf(" ");
            }   
        }
        printf("\n");
    }
  }
  else
  {
    printf("Sorry can't print");
  }  
  return 0;
}