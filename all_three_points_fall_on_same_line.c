/*: Given three points (x1, y1), (x2, y2) and 
(x3, y3), write a program to check if all the three 
points fall on one straight line*/
#include<stdio.h>
int main()
{
   double x1, y1, x2, y2, x3, y3, m1, m2;

    printf("Input the point (x1,y1):");
    scanf("%lf%lf", &x1, &y1);
    printf("Input the point (x2,y2):");
    scanf("%lf%lf", &x2, &y2);
     printf("Input the point (x3,y3):");
    scanf("%lf%lf", &x3, &y3);
    m1= (y2-y1)/(x2-x1);
    m2= (y3-y2)/(x3-x2);
    if (m1==m2)
    {
        printf("\n all the three points fall on one straight line");
    }
    else 
    {
        printf("\n all the three points do not fall on one straight line");
    }
    return 0;
}