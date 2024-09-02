/*:  Given a point (x, y), write a program to find 
out if it lies on the x-axis, y-axis or at the origin, viz. 
(0, 0)*/
#include<stdio.h>
int main()
{
   double x, y;

    printf("Input the point x:");
    scanf("%lf", &x);
    printf("Input the point y:");
    scanf("%lf", &y);
    if (x==0 && y!=0)
    {
        printf("\n The point fall on y-axis");
    }
    if (x!=0 && y==0)
    {
        printf("\n The point fall on x-axis");
    }
    if (x==0 && y==0)
    {
        printf("\n The point is at origin");
    }
    else
    {
    printf("\nerror");
    }
    return 0;
}