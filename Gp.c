/*Display the AP with first term 'a', common difference 'd' upto ‘n’ terms*/
#include<stdio.h>
#include<math.h>
int main() 
{
   float a,n,r;
    printf("Enter the first term :");
    scanf("%f",&a);
    printf("Enter the common ratio :");
    scanf("%f",&r);
    printf("Enter the number of terms :");
    scanf("%f",&n);
    if(r>0 && r<1)
    {
        for(float i=a; i>=a*pow(r,n-1); i=i*r)
        {
            printf("%f2\t",i);
        }
    }
    else
    {
         for(float i=a; i<=a*pow(r,n-1); i=i*r)
        {
            printf("%f2\t",i);
        }
    }
    return 0;
} 