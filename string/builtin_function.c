#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],s2[100],s3[100];
    puts("Enter the string str");
    scanf("%[^\n]s",str);
    puts("Enter the string s3");
    scanf("%s",s3);
    char* check=str;
    int x=strlen(check);
    printf("%d",x);
    strcpy(s2,check); //Deep copy
    printf("\n%s",s2);
    strcat(str,s3);
    printf("\n%s",str);

    return 0;
}