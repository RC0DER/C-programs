/*: Print table of n
#include<stdio.h>
int main() 
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    for(int i=n; i<=n*10; i=i+n)
    {
        printf("%d\n",i);
    }
    return 0;
}*/
/*: Print table of n*/
#include<stdio.h>
int main() 
{
    int n,m;
    printf("Enter the number :");
    scanf("%d",&n);
    for(int i=1; i<=10;i++)
    {
        m=n*i;
        printf("%d X %d = %d\n",n,i,m);
        
    }
    return 0;
}