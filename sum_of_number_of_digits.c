#include<stdio.h>
int main()
{ 
  int n,i,r,sum=0;
  printf("Enter the Number");
  scanf("%d",&n);
  i=n;
  while(i>0)
  {
   r=i%10;
   sum=sum+r;
   i=i/10;
  }
  printf("\nthe sum of digits of number is %d",sum);
  return 0;
}