/*to print odd number from 1 to n*/
#include<stdio.h>
int main() 
{
    int n;
    printf("Enter the term :");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {   
        if (i%2==0)
        {
            continue;
        }
        printf("%d\t",i);
    }
    return 0;
} 