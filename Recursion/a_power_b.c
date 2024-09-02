#include<stdio.h>
int po(int x, int y)
{
    int pro;
    if (y==0) return 1;
    pro= x*po(x,y-1);
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