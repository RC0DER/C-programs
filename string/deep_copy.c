#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],copy[100];
    puts("Enter the string");
    scanf("%[^\n]s",str);
    int size=0;
    int k=0;
    while(str[k]!='\0')
    {
        size++;
        k++;
    }
    puts("Copy of string");
    for(int i=0;i<size;i++)
    {
        copy[i]=str[i];
    }
    printf("%s",copy);
    return 0;
}