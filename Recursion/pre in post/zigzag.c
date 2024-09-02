#include<stdio.h>
void zigzag(int x)
{
    if(x==0) return;
    printf("%d ",x);
    zigzag(x-1);
    printf("%d ",x);
    zigzag(x-1);
    printf("%d ",x);
    return;
}
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    zigzag(n);
    return 0;
}