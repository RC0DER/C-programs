/*To find the youngest of three (Ram, Shyam and Ajay)*/
#include<stdio.h>
int main()
{
    int Ram , Shyam , Ajay  ;
    printf("Input the age of Ram:");
    scanf("%d", &Ram);
    printf("Input the age of Shyam:");
    scanf("%d", &Shyam);
    printf("Input the age of Ajay:");
    scanf("%d", &Ajay);
    if (Ram<Shyam && Ram<Ajay)
    {
        printf("\nRam age is %d and he is youngest",Ram);
    }
   else if (Shyam<Ram && Shyam<Ajay)
    {
        printf("\nShyam age is %d and he is youngest",Shyam);
    }
   else if (Ajay<Shyam && Ajay<Ram)
    {
        printf("\nAjay age is %d and he is youngest",Ajay);
    }
    return 0;
}