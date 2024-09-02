#include<stdio.h>
#include<math.h>
int main()
{ 
  int n,d,s=0,check, r,i,c=0;
  printf("The armstrong number from 1 to 100 are:");
  for( i=1;i<=1000;i++)
  {
   r=i;
   check=i;
    s=0;
    c=0;
    while(r>0)
    {
      r=r/10;
      c++;
    }
      r=i;
      while(r>0)
    {
      d=r%10;
      s=s+(pow(d,c));
      r=r/10;
    }
      if(s==check)
    {
      printf("%d ",s);
    }
  }
  return 0;
}
    