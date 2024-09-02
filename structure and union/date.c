/*Create a structure 'date' that contains three members
namely date,month and year.Create 2 structure variables
with different dates and now compare the two.If the dates
are equal then display message as "Equal" otherwise "unequal"*/

/*Now create another structure variable by assignimg the first
date to it. Compare the first and third dates*/
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    typedef struct dater{
        int day;
        int month;
        int year;
    }date;
    date a,b,c;
    scanf("%d",&a.day);
    scanf("%d",&a.month);
    scanf("%d",&a.year);
    scanf("%d",&b.day);
    scanf("%d",&b.month);
    scanf("%d",&b.year);
    bool flag1 = true;
    if(a.day!=b.day) flag1 = false;
    if(a.month!=b.month) flag1 = false;
    if(a.year!=b.year) flag1 = false;
    
    if(flag1==true) printf("The dates are same\n");
    else printf("The dates are different\n");

    bool flag2 = true;
    c=a;
    if(a.day!=c.day) flag2 = false;
    if(a.month!=c.month) flag2 = false;
    if(a.year!=c.year) flag2 = false;

    if(flag2==true) printf("The dates of a and c are same");
    else printf("The dates of a and b are different");

    return 0;
}