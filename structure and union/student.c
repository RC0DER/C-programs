/*Create a structure to specify data on students with these
attributes: Roll number, Name, Department, Course, Year of
joining. Create 2 structure variables. Now,create a function
to check if two stusents have the same department.Pass the 
two structure variable as input to this function*/
#include<stdio.h>
#include<string.h>

typedef struct student{
    char name[50];
    int Roll_no;
    char Department[100];
    char course[100];
    int doa[50]; //date of admission
}student;

void comp(char a[100], char b[100])
{
    if(strcmp(a,b)==0) printf("Department are same");
    else printf("Departmet are not same");
    return;
}

int main()
{
    student arr[2];
    printf("Stdents Detail\n");
    for(int i=0;i<2;i++){
        printf("%dth student details\n",i+1);
        printf("Name: ");
        scanf(" %[^\n]s",arr[i].name);
        printf("Roll No.: ");
        scanf("%d",&arr[i].Roll_no);
        printf("Department: ");
        scanf(" %[^\n]s",arr[i].Department);
        printf("Course: ");
        scanf(" %[^\n]s",arr[i].course);
        printf("Date of admission: ");
        scanf(" %[^\n]s",arr[i].doa);
        printf("\n");
    }
    comp(arr[0].Department , arr[1].Department);
    return 0;
}