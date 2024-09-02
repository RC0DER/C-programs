/*Given an array of marks of 10 students, if the mark of
any student is less than min(entered by user) print its roll number.[roll
number here refers the index  of the array]*/
#include<stdio.h>
int main()
{
    int marks[10],min;
    for(int i=0;i<10;i++)
    {
        printf("\nThe marks of Roll %d : ",i);
        scanf("%d",&marks[i]);
    }
    printf("Marks less than: ");
    scanf("%d",&min);
    for(int i=0;i<10;i++)
    {
        if(marks[i]<min) printf("\nRoll no.=%d",i);
    }
    return 0;
}