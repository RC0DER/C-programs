/*Take input percentage of a student and 
print the Grade according to marks*/
#include<stdio.h>
int main()
{
   int Marks  ;

    printf("Inpot your Marks:");
    scanf("%d", &Marks);
    if (Marks>90 && Marks<=100)
    {
        printf("\nTopper pro max(Excellent)");
    }
    if (Marks>80 && Marks<=90)
    {
        printf("\nTopper pro(Very Good)");
    }
     if (Marks>70 && Marks<=80)
    {
        printf("\nTopper(Good)");
    }
     if (Marks>60 && Marks<=70)
    {
        printf("\nKya hoga tera(Can do better)");
    }
     if (Marks>50 && Marks<=60)
    {
        printf("\nFail(Average)");
    }
     if (Marks>40 && Marks<=50)
    {
        printf("\nFail pro(Below average)");
    }
     if (Marks<=40)
    {
        printf("\nFail pro max(Fail)");
    }
    return 0;
}