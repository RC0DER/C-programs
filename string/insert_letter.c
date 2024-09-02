/*Insert a new letter between string*/
#include<stdio.h>
#include<string.h>
int main()
{
    int idx;
    char str[100],ch;
    puts("Enter the string str");
    scanf("%[^\n]s",str);
    int size=0,k=0;
    while(str[k]!='\0')
    {
        size++;
        k++;
    }
    printf("The size of string : %d\n",size);
    puts("Enter the index where you want to insert a letter");
    scanf("%d",&idx);
    if(idx < 0 || idx > size){
        puts("Invalid index!");
        return 1;
    }
    puts("Enter the character you want to insert");
    scanf(" %c",&ch);
    for(int i=size;i>=idx;i--)
    {
        str[i+1]=str[i];
    }
    str[idx]=ch;
    str[size+1]='\0';
    puts("The new sentence is");
    printf("%s",str);
    return 0;
}