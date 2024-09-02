/* Print hello world ‘n’ times. Take ‘n’ as 
input from use*/
#include<stdio.h>
int main()
{
   int n,i ;

    printf("Input the number:");
    scanf("%d", &n);
    
    for ( i=1 ; i<=n ; i++ )
    {
        printf("\nhello world");
    }
    return 0;
}