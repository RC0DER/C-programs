/*Sum of array element*/
#include<stdio.h>
int main()
{
    int arr[10],sum=0;
    printf("Enter the elements");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++)
    {
        sum+=arr[i];
    }
    printf("\nSum of Elements of array : %d",sum);
    return 0;
}