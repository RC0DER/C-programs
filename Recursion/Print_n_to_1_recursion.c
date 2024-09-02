/*Print n to 1 using recursion*/
#include<stdio.h>
void num(int a)
{
    printf("%d  ",a);
    if(a==0) return;
    num(a-1);
    return;
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    num(n);
    return 0;
}