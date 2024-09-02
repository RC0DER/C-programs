/*Swapping of number by pointers(pass by reference)*/
#include<stdio.h>
void swap(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main()
{
    int a,b;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("\nEnter second number :");
    scanf("%d",&b);
    swap(&a,&b);
    printf("\nThe swapped value of a is %d",a);
    printf("\nThe swapped value of b is %d",b);
    return 0;
}