/*Create a structure 'person' having attributes as age and weight.
Access its structure variables using pointers.*/
#include<stdio.h>
typedef struct person{
    int age;
    int weight;
}person;
void change(person *b)
{
    b->age=20;
    b->weight=70;
    return; 
}
int main()
{
    person a;
    a.age=19;
    a.weight=80;
    printf("age = %d\n",a.age);
    printf("Weight = %d\n",a.weight);
    change(&a);
    printf("Changed age = %d\n",a.age);
    printf("Changed Weight = %d\n",a.weight);
    return 0;
}