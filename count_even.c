/*: Print even number till Number n*/
#include<stdio.h>
int main() 
{
    int n;
    printf("count till number :");
    scanf("%d",&n);
    for(int i=2; i<=n; i=i+2)
    {
        printf("\n%d",i);
    }
    return 0;
}