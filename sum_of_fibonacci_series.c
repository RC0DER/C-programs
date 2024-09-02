#include<stdio.h>
int main()
{
    int term1=0, term2=1, next, sum, n;
    printf("To the term to be printed: ");
    scanf("%d",&n);
    printf("%d\t",term1);
    printf("%d\t",term2);
    sum=term1+term2;
    for(int i=1;i<=n-2;i++)
    {
        next=term1+term2;
        printf("%d\t",next);
        sum=sum+next;
        term1=term2;
        term2=next;
    }
    printf("\n%d is the sum of this fib0nacci series",sum);
    return 0;
}