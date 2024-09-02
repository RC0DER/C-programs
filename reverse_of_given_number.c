#include<stdio.h>
int main()
{ 
  int n,i,r,reverse=0;
  printf("Enter the Number");
  scanf("%d",&n);
  i=n;
  while(i>0)
  {
   r=i%10;
   reverse=reverse*10+r;
   i=i/10;
  }
  printf("\nthe reverse of given number is %d",reverse);
  return 0;
}