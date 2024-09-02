/*To find Area and Perimeter of Rectangle and also determine
 which is greater*/
#include<stdio.h>
int main()
{
    int Length , Breadth , Area , Perimeter ;
    printf("Input the Length:");
    scanf("%d", &Length);
    printf("\nInput the Bredth:");
    scanf("%d", &Breadth);
    Area = Length * Breadth ;
    Perimeter = 2 * (Length + Breadth);
    if (Area > Perimeter)
    {
        printf("\nArea: %d is greater",Area);
    }
    else 
    {
        printf("\nPerimeter: %d is greater",Perimeter);
    }
    return 0;
}