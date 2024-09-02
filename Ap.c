/*: Display the AP with first term 'a', common difference 'd' upto ‘n’ 
terms.*/
#include<stdio.h>
#include<math.h>
int main() 
{
    int a,n,d;
    printf("Enter the first term :");
    scanf("%d",&a);
    printf("Enter the common difference :");
    scanf("%d",&d);
    printf("Enter the number of terms :");
    scanf("%d",&n);
    if (d>0)
    {
    for(int i=a; i<=a+(n-1)*d; i=i+d)
    {
        printf("%d\t",i);
    }
    }
    else if (d<0)
    {
         for(int i=a; i>=a+(n-1)*d; i=i+d)
    {
        printf("%d\t",i);
    }
    }
    else if (d=0)
    {
        printf("it do not form an AP");
    }
    
    return 0;
}