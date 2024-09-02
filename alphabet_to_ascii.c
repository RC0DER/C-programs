/*Alphabet and its equivalent ASCII*/
#include<stdio.h>
int main()
{ 
  char alpha;
  int i;
  for(i=65;i<=90;i++)
  {
    alpha=i;
    printf("Alphabet equivalent to ASCII %d is %c\n",i,alpha);
  }
  for(i=97;i<=122;i++)
  {
    alpha=i;
    printf("Alphabet equivalent to ASCII %d is %c\n",i,alpha);
  }
  return 0;
}