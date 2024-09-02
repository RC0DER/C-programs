/*Print m to n using recursion*/
#include<stdio.h>
void dec(int a, int b)
{
    printf("%d  ",a);
    if(a<=b) return;
    dec(a-1,b);
    return;
}
void inc(int a, int b)
{
    printf("%d  ",a);
    if(a>=b) return;
    inc(a+1,b);
    return;
}
int main()
{
    int m,n;
    printf("Enter the number m: ");
    scanf("%d",&m);
    printf("Enter the number n: ");
    scanf("%d",&n);
    if(m>n) dec(m,n);
    else if(n>m) inc(m,n);
    else printf("🤯");
    return 0;
}