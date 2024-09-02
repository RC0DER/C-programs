/*1 - 2 + 3 - 4 + 5 - 6… upto ‘n’*/
#include<stdio.h>
int main()
{ 
  int n,i,o=0,e=0,sum=0;
  printf("Enter the Number");
  scanf("%d",&n);
  i=1;
  while(i<=n)
  {
   if(i%2!=0)
   {
    o=o+i;
   }
   else
   {
    e=e+i;
   }
   i++;
  }
  printf("\nthe sum this series is %d",o-e);
  return 0;
}