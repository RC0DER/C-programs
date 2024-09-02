/*To find the greatest of four integer*/
#include<stdio.h>
int main()
{
    int I1 , I2 , I3 , I4  ;
    printf("Input the I1:");
    scanf("%d", &I1);
     printf("Input the I2:");
    scanf("%d", &I2);
     printf("Input the I3:");
    scanf("%d", &I3);
     printf("Input the I4:");
    scanf("%d", &I4);
    if (I1>I2 && I1>I3 && I1>I4)
    {
        printf("\nI1=%d is the greatest number",I1);
    }
    else if (I2>I3 && I2>I4 && I2>I1) 
    {
        printf("\nI2=%d is the greatest nimber",I2);
    }
     else if (I3>I4 && I3>I1 && I3>I2) 
    {
        printf("\nI3=%d is the greatest nimber",I3);
    }
     else if (I4>I1 && I4>I2 && I4>I3) 
    {
        printf("\nI4=%d is the greatest nimber",I4);
    }
    return 0;
}