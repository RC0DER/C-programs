 /*Create a structure type 'person' with name, salary and age 
 as its attributes.Declare and initialise 2 variable for this.
 Print the name of first person and the age of other*/
 #include<stdio.h>
 #include<string.h>
 int main()
 {
    struct Person{
        char name[100];
        int salary;
        int age;
    }a,b;
    strcpy(a.name,"Jiraya");
    a.salary=100000;
    a.age=19;
    strcpy(b.name,"Oruchimaru");
    b.salary=10;
    b.age=30;
    printf("Name of the first person:\n %s\n         ",a.name);
    printf("age of the second person:\n %d",b.age);
    return 0;
 }