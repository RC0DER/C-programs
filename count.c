/*: Print number till number n*/
#include<stdio.h>
int main() 
{
    int n;
    printf("count till number :");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        printf("\n%d",i);
    }
    return 0;
}