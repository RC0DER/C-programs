#include<stdio.h>
int main()
{
    int a , b , c;
    printf("Input the side1:");
    scanf("%d", &a);
    printf("\nInput the side2:");
    scanf("%d", &b);
    printf("\nInput the side3:");
    scanf("%d", &c);
    if (a==b && b==c && c==a)
    {
        printf("\nTriangle is equilateral");
    }
    else if (a==b || b==c || c==a) 
    {
        if (a*a==b*b + c*c || b*b==a*a + c*c || c*c==b*b + a*a) 
        {
            printf("\nTriangle is right angled");
        }
        else
        {
            printf("\nTriangle is iso-sceles");
        }
        
    }
     else if (a!=b && b!=c && c!=a) 
    {
        if (a*a==b*b + c*c || b*b==a*a + c*c || c*c==b*b + a*a) 
        {
            printf("\nTriangle is right angled");
        }
        else
        {
             printf("\nYriangle is scalene");
        }
       
    }
    return 0;
}