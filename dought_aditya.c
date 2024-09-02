/*To find the greatest of four integer*/
#include<stdio.h>
int main()
{
    float I1 , I2 , I3 , Avg  ;
    printf("Input the I1:");
    scanf("%f", &I1);
     printf("Input the I2:");
    scanf("%f", &I2);
     printf("Input the I3:");
    scanf("%f", &I3);
    if (I1>I2 && I1>I3 )
    {
        printf("\nI1=%f is the greatest number",I1);
        if(I2>I3)
        {
            printf("\nI2=%f is the second greatest number",I2);
            Avg = (I1+I2)/2;
        }
        else if (I3>I2)
        {
            printf("\nI3=%f is the second greatest number",I3);
            Avg = (I1+I3)/2;
        }
    }
     if (I2>I1 && I2>I3 )
    {
        printf("\nI1=%f is the greatest number",I2);
        if(I1>I3)
        {
            printf("\nI1=%f is the second greatest number",I1);
            Avg = (I1+I2)/2;
        }
        else if (I3>I1)
        {
            printf("\nI3=%f is the second greatest number",I3);
            Avg = (I2+I3)/2;
        }
    }
     if (I3>I2 && I3>I1 )
    {
        printf("\nI3=%f is the greatest number",I3);
        if(I1>I2)
        {
            printf("\nI1=%f is the second greatest number",I1);
            Avg = (I1+I3)/2;
        }
        else if (I2>I1)
        {
            printf("\nI2=%f is the second greatest number",I2);
            Avg = (I2+I3)/2;
        }
    }
   printf("\nThe average of two greatest number is %f",Avg);
    return 0;
}