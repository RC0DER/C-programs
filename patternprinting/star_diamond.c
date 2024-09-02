/*print star pyramid*/
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
        printf("*");  
    }   
    printf("\n");
  }
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    {
        printf(" ");
        
    }
    for(j=1;j<=2*(n-i)-1;j++)
    {
        printf("*");  
    }   
    printf("\n");
  }
  return 0;
}
// #include<stdio.h>
// int main()
// { 
//   int n,i,j,nsp,nst,ml;
//   printf("enter number of rows/column: ");
//   scanf("%d",&n);
//   nsp=n/2;
//   nst=1;
//   ml=n/2+1;
//   for(i=1;i<=n;i++)
//   {
//     for(j=1;j<=nsp;j++)
//     {
//         printf(" ");  
//     }
//     for(j=1;j<=nst;j++)
//     {
//         printf("*");  
//     } 
//     if(i<ml)
//     {
//       nsp--;
//       nst+=2;
//     }  
//     else
//     {
//       nsp++;
//       nst-=2;
//     }
//     printf("\n");
//   }
//   return 0;
// }