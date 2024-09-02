#include<stdio.h>
int po(int x, int y)
{
    int pro,m;
    if (y==0) return 1;
    else if (y==1) return x;
    m=po(x,y/2);
    if (y%2==0) pro=m*m;
    else pro=m*m*x; 
    return pro;
}
int main()
{
    int a,b,c;
    printf("Enter the number : ");
    scanf("%d",&a);
    printf("\nEnter the power : ");
    scanf("%d",&b);
    c=po(a,b);
    printf("\n%d^%d=%d",a,b,c);
    return 0;
}