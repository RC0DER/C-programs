#include<stdio.h>
int main()
{ 
  int n,i,count=0;
  printf("Enter the Number");
  scanf("%d",&n);
  for( i=n;i>0;i=i/10)
  {
   count++;
  }
  printf("\nthe number of digits is %d",count);
  return 0;
}