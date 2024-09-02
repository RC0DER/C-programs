/*Print dec-inc using recursion*/
#include<stdio.h>
void num(int a)
{
    printf("%d\n",a);
    if(a==0) return;
    num(a-1);
    printf("%d\n",a);
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