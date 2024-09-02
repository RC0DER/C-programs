#include<stdio.h>
int main()
{
    int a,b,result;
    char op;
    printf("Enter the operator(+,-,*,/)");
    scanf("%c",&op);
    printf("\nEnter the two numbers");
    scanf("%d %d",&a,&b);
    switch (op)
    {
        case '+':
        result=a+b;
        printf("%d %c %d = %d",a,op,b,result);
        break;
        case '-':
        result=a-b;
        printf("%d %c %d = %d",a,op,b,result);
        break;
        case '*':
        result=a*b;
        printf("%d %c %d = %d",a,op,b,result);
        break;
        case '/':
        if(b!=0)
        {
            result=a/b;
            printf("%d %c %d = %d",a,op,b,result);
        }
        else
        {
            printf("division by zero is not allowed");
        }
        break;
        default:
        printf("Error! operator not found");
    }
    return 0;

}