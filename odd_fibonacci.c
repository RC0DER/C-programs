#include<stdio.h>
int main()
{
    int term1=0, term2=1, next, n;
    printf("To the term to be printed: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if( term1 % 2!=0)
        {
            printf("%d\t",term1);
        }
        next=term1+term2;
        term1=term2;
        term2=next;
    }
    return 0;
}