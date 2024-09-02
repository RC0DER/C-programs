#include<stdio.h>
#include<string.h>

int main()
{
    typedef struct cricketer{
        char name[100];
        int age;
        int matches;
        float average;
    }cricketer;

    cricketer arr[20];
    for(int i=0;i<20;i++)
    {
        scanf(" %[^\n]s",arr[i].name); 
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].matches);
        scanf("%f",&arr[i].average);
    }
    for(int i=0;i<20;i++)
    {
        printf("Name: %s\n",arr[i].name);
        printf("Age: %d\n",arr[i].age);
        printf("Number of matches: %d\n",arr[i].matches);
        printf("Average runs: %f\n",arr[i].average);
        printf("\n");
    }
    return 0;
}