#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    puts("Enter the string");
    scanf("%[^\n]s",str);
    puts("The size of string is :");
    int size=0;
    int k=0;
    while(str[k]!='\0')
    {
        size++;
        k++;
    }
    for(int i=0,j=size-1;i<=j;i++,j--)
    {
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    printf("%s",str);
    return 0;
}