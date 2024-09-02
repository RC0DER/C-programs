/*Fibonacci series*/
#include<stdio.h>
int main()
{ 
  int n,i,term1,term2,next;
  printf("Enter the Number of term of fibonacci series");
  scanf("%d",&n);
  printf("\nThe required fibonacci series is :");
  term1=0;
  term2=1;
  printf("%d ",term1);
  printf("%d ",term2);
  for(i=3;i<=n;i++)
  {
    next=term1+term2;
    printf("%d ",next);
    term1=term2;
    term2=next;
  }
  return 0;
}