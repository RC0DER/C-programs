/*To check if a number is prime or not*/
#include<stdio.h>
int main() 
{
    int n,a;
    printf("Enter the Number :");
    scanf("%d",&n);
    a=0;
    for(int i=2; i<=n-1; i++)
    {   
        if (n%i==0)
        {
            a=1;
            break;
        }
    }
    if (n==1)
    {
        printf("\n1 is neither prime nor composite" );
    }
    else if (a==0)
    {
        printf("\n %d is a prime number",n);
    }
    else
    {
        printf("\n %d is a composite number",n);
    }
    return 0;
} 