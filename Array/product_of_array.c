/*Product of array element*/
#include<stdio.h>
int main()
{
    int pro=1,n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        pro*=arr[i];
    }
    printf("\nProduct of Elements of array : %d",pro);
    return 0;
}
   