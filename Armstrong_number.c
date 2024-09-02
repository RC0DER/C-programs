/*Armstrong number from 1 to n*/
#include<stdio.h>
#include<math.h>
int main()
{ 
  int n,i,a,digit,r,sum;
  printf("enter the number to which armstrrong number to be print : ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    sum=0;
    digit=0;
    for(a=i;a>0;a=a/10)
    {
        digit=digit+1;
    }
    for(a=i;a>0;a=a/10)
    {
        r=a%10;
        sum=sum+pow(r,digit);
    }
    if(i==sum)
    {
        printf("%d ",sum);
    }
  }
  return 0;
}