/*Copy contents of one array into another in the reverse
order*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr1[n],arr2[n];
    printf("Enter the elements\n");
    for(int i=0;i<n;i++) scanf("%d",&arr1[i]);
    printf("array elements\n");
    for(int i=0;i<n;i++) printf("%d ",arr1[i]);
    printf("\nreverse oreder elements\n");
    for(int i=0;i<n;i++)
    {
        arr2[i]=arr1[n-1-i];
        printf("%d ",arr2[i]);
    }
    
    return 0;
}