/*Take 3 numbers input and tell if they 
can be the sides of a triangle*/
#include<stdio.h>
int main()
{
   int S1 , S2 , S3  ;

    printf("Input the side S1:");
    scanf("%d", &S1);

     printf("Input the side S2:");
    scanf("%d", &S2);

     printf("Input the side S3:");
    scanf("%d", &S3);

    if (S1 + S2 > S3 && S1 + S3 > S2 && S2 + S3 > S1)
    {
        printf("\nThey can be the side of tiange with Side1=%d, Side2=%d, Side3=%d",S1,S2,S3);
    }
    else 
    {
        printf("\nthey can't form Triangle ");
    }
    return 0;
}