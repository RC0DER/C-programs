/* factorial of first n terms*/
#include<stdio.h>
int main()
{ 
  int n,i,factorial=1;
  printf("Enter the Number");
  scanf("%d",&n);
  i=1;
  while(i<=n)
  {
   factorial=factorial*i;
   printf("\nthe factorial of %d is %d",i,factorial);
   i++;
  }
  return 0;
}