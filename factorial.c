/* factorial of a given number ‘n’*/
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
   i++;
  }
  printf("\nthe factorial of given number is %d",factorial);
  return 0;
}