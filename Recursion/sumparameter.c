/*Print sum of n numbers*/
#include<stdio.h>
int sum(int a)
{
    if(a==0) return 0;
    int recAns=a + sum(a-1);
    return recAns;
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Sum = %d",sum(n));
    return 0;
}